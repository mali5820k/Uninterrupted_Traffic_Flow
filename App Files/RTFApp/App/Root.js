/**
 * Senior Design Project - Team 4
 * Green Wave Theory for Maximum Uninterrupted Traffic Flow
 *
 * Road-to-Traveller Feedback (RTF) Mobile Application
 *
 * https://github.com/mali5820k/Uninterrupted_Traffic_Flow
 *
 * Authors:
 * Alexander Ing
 *
 * 2022-02-06
 *
 * @format
 * @flow strict-local
 */

/**
 * Begin Imports
 */
import React from 'react';
import type {Node} from 'react';
import {
  StyleSheet,
  useColorScheme,
  View,
  Image,
  Text,
  TextInput,
  ActivityIndicator,
  Button,
  KeyboardAvoidingView,
  FlatList,
  Alert,
  Switch,
} from 'react-native';
import {NavigationContainer, useNavigation} from '@react-navigation/native';
import {createNativeStackNavigator} from '@react-navigation/native-stack';
import {io} from 'socket.io-client';

const config = require('./config.json');
const logo = require('./images/SD.png');
let socketio = null;

/**
 * GLOBAL VARIABLES
 *
 *
 *
 */

const Colors = {
  black: '#000',
  white: '#FFF',
  masonGreen: '#063',
  masonGold: '#FC3',
  debugRed: '#FB4934',
};

let globalState = {
  connectionDetails: {
    useSecure: config.useHTTPS,
    host: config.defaultHost,
    port: config.defaultPort,
  },
  selectedid: -1,
  vehicles: [
    {
      id: 1,
      name: 'Vehicle 1',
    },
    {
      id: 2,
      name: 'Vehicle 2',
    },
    {
      id: 3,
      name: 'Vehicle 3',
    },
    {
      id: 4,
      name: 'Vehicle 4',
    },
    {
      id: 5,
      name: 'Vehicle 5',
    },
    {
      id: 6,
      name: 'Vehicle 6',
    },
    {
      id: 7,
      name: 'Vehicle 7',
    },
    {
      id: 8,
      name: 'Vehicle 8',
    },
    {
      id: 9,
      name: 'Vehicle 9',
    },
    {
      id: 10,
      name: 'Vehicle 10',
    },
    {
      id: 11,
      name: 'Vehicle 11',
    },
    {
      id: 12,
      name: 'Vehicle 12',
    },
    {
      id: 13,
      name: 'Vehicle 13',
    },
    {
      id: 14,
      name: 'Vehicle 14',
    },
    {
      id: 15,
      name: 'Vehicle 15',
    },
    {
      id: 16,
      name: 'Vehicle 16',
    },
  ],
  centralServerData: {},
};

let queueConnRetry;

/**
 * WELCOME SCREEN
 *
 *
 *
 */

const WelcomeLogo = props => {
  return (
    <View style={style.centeredColumn}>
      <Image style={style.logo} source={logo} />
      <Text
        style={[
          style.heading,
          {
            color: props.isDarkMode ? Colors.white : Colors.black,
            textAlign: 'center',
          },
        ]}>
        Maximum Uninterrupted Traffic Flow
      </Text>
    </View>
  );
};

const ConnectionStatus = props => {
  const navigation = useNavigation();
  if (props.connectionState.attempting) {
    return (
      <View
        style={{
          flex: 1,
        }}>
        <ActivityIndicator
          size="large"
          color={props.isDarkMode ? Colors.masonGold : Colors.masonGreen}
        />
        <Text style={style.centeredText}>Connecting...</Text>
      </View>
    );
  } else if (props.connectionState.connected) {
    return (
      <View
        style={{
          flex: 1,
        }}>
        <Text style={style.centeredText}>Connected!</Text>
        <View style={style.centeredColumn}>
          <View style={style.button}>
            <Button
              title="Select Vehicle"
              color={Colors.masonGreen}
              onPress={() => navigation.push('VehicleSelect')}
            />
          </View>
        </View>
      </View>
    );
  } else {
    return (
      <View
        style={{
          flex: 1,
        }}>
        <Text style={style.centeredText}>Connection Failed!</Text>
        <View style={style.centeredColumn}>
          <View style={style.button}>
            <Button
              title="Retry"
              color={Colors.masonGreen}
              onPress={props.queueRetry}
            />
          </View>
          <View style={style.button}>
            <Button
              title="Manual Connection"
              color={Colors.masonGold}
              onPress={() => navigation.push('ManualConnection')}
            />
          </View>
          {config.debugMode ? (
            <View style={style.button}>
              <Button
                title="DEBUG: Select Vehicle"
                color={Colors.debugRed}
                onPress={() => navigation.push('VehicleSelect')}
              />
            </View>
          ) : (
            <></>
          )}
        </View>
      </View>
    );
  }
};

class WelcomeScreen extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      attempting: true,
      connected: false,
    };
    queueConnRetry = this.queueRetry;
  }

  attemptConnection = async () => {
    console.log(`Attempting handshake with ${this.props.connectionDetails.host} on port ${this.props.connectionDetails.port} (using ${this.props.connectionDetails.useSecure ? 'https' : 'http'})`);
    return fetch(
      `${this.props.connectionDetails.useSecure ? 'https' : 'http'}://${this.props.connectionDetails.host}:${this.props.connectionDetails.port}/${config.api.initPath}`,
    )
      .then(response => {
        if (response.ok) {
          this.setState((state, props) => {
            return {
              connected: true,
              attempting: false,
            };
          });
          // Connect to socket.io server
          socketio = io(`${this.props.connectionDetails.useSecure ? 'wss' : 'ws'}://${this.props.connectionDetails.host}:${this.props.connectionDetails.port}`);
          socketio.on('handshake client', () => {
            socketio.emit('handshake');
          });
          socketio.on('data update', data => {
            globalState.centralServerData = data;
          });
        } else {
          this.setState((state, props) => {
            return {
              connected: false,
              attempting: false,
            };
          });
        }
      })
      .catch(error => {
        this.setState((state, props) => {
          return {
            connected: false,
            attempting: false,
          };
        });
        throw error;
      });
  };

  queueRetry = () => {
    console.log('queueretry called');
    this.setState({
      attempting: true,
      connected: false,
    });
  };

  componentDidMount() {
    console.log('welcome: component mount, attempting connection');
    this.attemptConnection().catch(error => {
      console.log('Network request failed. Perhaps specified host is unreachable?', error);
    });
  }

  componentDidUpdate(prevProps, prevState) {
    console.log('welcome: componentDidUpdate');
    console.log(`this.state.attempting: ${this.state.attempting}, prevState.attempting: ${prevState.attempting}`);
    if (this.state.attempting && !prevState.attempting) {
      console.log('State update; attempting handshake with server...');
      this.attemptConnection().catch(error => {
        console.log('Network request failed. Perhaps specified host is unreachable?', error);
      });
    } else if (prevProps.connectionDetails !== this.props.connectionDetails) {
      console.log('Props update; attempting handshake with server...');
      this.attemptConnection().catch(error => {
        console.log('Network request failed. Perhaps specified host is unreachable?', error);
      });
    }
  }

  render() {
    let backgroundStyle = {
      flex: 1,
      backgroundColor: this.props.isDarkMode ? Colors.black : Colors.white,
    };

    return (
      <View style={backgroundStyle}>
        <View style={style.container}>
          <View style={{flex: 4}}>
            <WelcomeLogo isDarkMode={this.props.isDarkMode} />
          </View>
          <View style={{flex: 8}}>
            <ConnectionStatus
              isDarkMode={this.props.isDarkMode}
              color={this.props.color}
              queueRetry={this.queueRetry}
              connectionState={this.state}
            />
          </View>
        </View>
      </View>
    );
  }
}

/**
 * MANUAL CONNECTION SCREEN
 *
 *
 *
 */

class HTTPSToggle extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      useSecure: globalState.connectionDetails.useSecure,
    };
  }

  toggleState = newState => {
    this.setState((state, props) => {
      return {
        useSecure: newState,
      };
    });
  };

  componentDidUpdate(prevProps, prevState) {
    if (prevState.useSecure !== this.state.useSecure) {
      globalState.connectionDetails.useSecure = this.state.useSecure;
      console.log(`aaaah ${this.state.useSecure} ${globalState.connectionDetails.useSecure}`);
    }
  }

  render() {
    return (
      <Switch
        trackColor={{false: Colors.debugRed, true: Colors.masonGreen}}
        thumbColor={Colors.white}
        onValueChange={value => this.toggleState(value)}
        value={this.state.useSecure}
      />
    );
  }
}

class ManualConnectionScreen extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      useSecure: globalState.connectionDetails.useSecure,
      hostSelected: false,
      portSelected: false,
    };
  }

  toggleState = newState => {
    globalState.connectionDetails.useSecure = newState;
    this.setState((state, props) => {
      return {
        useSecure: newState,
      };
    });
  };

  textInputSelect = id => {
    switch (id) {
      default:
        this.setState(() => {
          return {
            hostSelected: false,
            portSelected: false,
          };
        });
        break;
      case 1:
        this.setState(() => {
          return {
            hostSelected: true,
            portSelected: false,
          };
        });
        break;
      case 2:
        this.setState(() => {
          return {
            hostSelected: false,
            portSelected: true,
          };
        });
        break;
    }
  };

  render() {
    let HTTPSText = this.state.useSecure ? 'Use HTTPS' : 'Use HTTP';
    const backgroundStyle = {
      flex: 1,
      backgroundColor: this.props.isDarkMode ? Colors.black : Colors.white,
    };
    const inputStyle = {
      color: this.props.isDarkMode ? Colors.white : Colors.black,
    };
    return (
      <View style={backgroundStyle}>
        <View style={style.container}>
          <View style={style.fixToText}>
            <Text style={style.inputLabel}>{HTTPSText}</Text>
            <Switch
              trackColor={{false: Colors.debugRed, true: Colors.masonGreen}}
              thumbColor={Colors.white}
              onValueChange={value => this.toggleState(value)}
              value={this.state.useSecure}
            />
          </View>
          <KeyboardAvoidingView>
            <Text style={style.inputLabel}>Hostname or IP Address</Text>
            <TextInput
              defaultValue={this.props.connectionDetails.host}
              style={[
                this.state.hostSelected ? style.inputSelected : style.input,
                inputStyle,
              ]}
              placeholder="Example: www.example.com"
              onChangeText={text => {
                globalState.connectionDetails.host = text;
              }}
              onEndEditing={() => this.textInputSelect(0)}
              onFocus={() => this.textInputSelect(1)}
            />
          </KeyboardAvoidingView>
          <KeyboardAvoidingView>
            <Text style={style.inputLabel}>Port Number</Text>
            <TextInput
              defaultValue={this.props.connectionDetails.port.toString()}
              style={[
                this.state.portSelected ? style.inputSelected : style.input,
                inputStyle,
              ]}
              keyboardType="numeric"
              placeholder="Example: 443"
              onChangeText={text => {
                globalState.connectionDetails.port = text;
              }}
              onEndEditing={() => this.textInputSelect(0)}
              onFocus={() => this.textInputSelect(2)}
            />
          </KeyboardAvoidingView>
          <View style={style.fixToText}>
            <Button
              title="Reset to Default"
              color={Colors.masonGold}
              onPress={() => {
                this.props.navigation.goBack();
                globalState.connectionDetails.host = config.defaultHost;
                globalState.connectionDetails.port = config.defaultPort;
                queueConnRetry();
              }}
            />
            <Button
              title="Save and Retry"
              color={Colors.masonGreen}
              onPress={() => {
                queueConnRetry();
                this.props.navigation.navigate('Initialization');
              }}
            />
          </View>
        </View>
      </View>
    );
  }
}

/*
 * VEHICLE SELECTION SCREEN
 *
 *
 *
 */

let vehicleFollowCallback;

const renderVehicleButton = ({item}, props) => {
  return (
    <View style={[style.button, {marginTop: item.id === 1 ? 30 : 10}]}>
      <Button
        title={item.name}
        color={Colors.masonGreen}
        onPress={() => vehicleFollowCallback(item.id)}
      />
    </View>
  );
};

class VehicleSelectionScreen extends React.Component {
  constructor(props) {
    super(props);

    vehicleFollowCallback = id => {
      globalState.selectedid = id;
      this.props.navigation.push('VehicleFollow');
    };
  }

  render() {
    const backgroundStyle = {
      flex: 1,
      backgroundColor: this.props.isDarkMode ? Colors.black : Colors.white,
    };
    return (
      <View style={backgroundStyle}>
        <View style={style.centeredColumn}>
          <FlatList
            data={globalState.vehicles}
            renderItem={renderVehicleButton}
            //keyExtractor{(item) => item.id}
          />
          {config.debugMode ? (
            <Button
              title="DEBUG: Go back"
              color={Colors.debugRed}
              onPress={() => this.props.navigation.goBack()}
            />
          ) : (
            <> </>
          )}
        </View>
      </View>
    );
  }
}

class VehicleFollowScreen extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      data: {
        dataUnset: true,
      },
    };
    this.socket = socketio;
    this.socket.on('data update', newData => {
      console.log('new data', newData);
      this.setState((state, props) => {
        return {
          data: newData,
        };
      });
    });
  }

  /**
        this.setState(() => {
          return {
            hostSelected: true,
            portSelected: false,
          };
        });
        */
  componentWillUnmount() {
    // Disconnect when this screen is left
    console.log('left VehicleFollowScreen, disconnecting from socketio');
    this.socket.removeAllListeners('data update');
  }

  render() {
    const backgroundStyle = {
      flex: 1,
      backgroundColor: this.props.isDarkMode ? Colors.black : Colors.white,
    };

    if (globalState.selectedid < 0) {
      this.props.navigation.goBack();
      Alert.alert(
        'Error',
        'The vehicle id you have chosen is not valid. Please reconnect and choose another vehicle.',
        [
          {
            text: 'OK',
            onPress: () => {
              this.props.navigation.popToTop();
            },
          },
        ],
      );
    }

    return (
      <View style={backgroundStyle}>
        <Text>Current Selected Vehicle: {globalState.selectedid}</Text>
        <Text>Data: {JSON.stringify(this.state.data)}</Text>
      </View>
    );
  }
}

const App: () => Node = () => {
  const Stack = createNativeStackNavigator();
  const isDarkMode = useColorScheme() === 'dark';

  return (
    <NavigationContainer>
      <Stack.Navigator
        screenOptions={{
          headerStyle: {
            backgroundColor: Colors.masonGreen,
          },
          headerTintColor: Colors.white,
          headerTitleStyle: {
            fontWeight: 'bold',
          },
        }}>
        <Stack.Screen
          name="Initialization"
          options={{
            title: 'Road-to-Traveller Feedback',
          }}>
          {({navigation}) => {
            return (
              <WelcomeScreen
                connectionDetails={globalState.connectionDetails}
                color={isDarkMode ? Colors.masonGold : Colors.masonGreen}
                isDarkMode={isDarkMode}
                navigation={navigation}
              />
            );
          }}
        </Stack.Screen>
        <Stack.Screen
          name="ManualConnection"
          options={{
            title: 'Manual Connection',
          }}>
          {({navigation}) => {
            return (
              <ManualConnectionScreen
                isDarkMode={isDarkMode}
                color={isDarkMode ? Colors.masonGold : Colors.masonGreen}
                connectionDetails={globalState.connectionDetails}
                navigation={navigation}
              />
            );
          }}
        </Stack.Screen>
        <Stack.Screen
          name="VehicleSelect"
          //component={VehicleSelectionScreen}
          options={{
            title: 'Vehicle Selection',
          }}>
          {({navigation}) => {
            return (
              <VehicleSelectionScreen
                navigation={navigation}
                isDarkMode={isDarkMode}
                color={isDarkMode ? Colors.masonGold : Colors.masonGreen}
              />
            );
          }}
        </Stack.Screen>
        <Stack.Screen
          name="VehicleFollow"
          //component={VehicleFollowScreen}
          options={{
            title: 'Feedback',
          }}>
          {({navigation}) => {
            return (
              <VehicleFollowScreen
                navigation={navigation}
                connectionDetails={globalState.connectionDetails}
                isDarkMode={isDarkMode}
                color={isDarkMode ? Colors.masonGold : Colors.masonGreen}
              />
            );
          }}
        </Stack.Screen>
      </Stack.Navigator>
    </NavigationContainer>
  );
};

const style = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    marginHorizontal: 16,
  },
  logo: {
    marginLeft: 'auto',
    marginRight: 'auto',
    width: 100,
    height: 100,
    borderRadius: 20,
  },
  heading: {
    fontSize: 26,
    marginLeft: 'auto',
    marginRight: 'auto',
  },
  centeredColumn: {
    flex: 1,
    flexDirection: 'column',
    justifyContent: 'center',
  },
  topLevelView: {
    flex: 1,
  },
  centeredText: {
    marginLeft: 'auto',
    marginRight: 'auto',
    marginVertical: 20,
    fontSize: 16,
  },
  fixToText: {
    flexDirection: 'row',
    justifyContent: 'space-between',
  },
  inputLabel: {
    marginTop: 10,
    fontSize: 14,
  },
  input: {
    borderBottomColor: Colors.masonGreen,
    borderBottomWidth: StyleSheet.hairlineWidth,
    marginBottom: 30,
  },
  inputSelected: {
    borderBottomColor: Colors.masonGold,
    borderBottomWidth: 2,
    marginBottom: 30,
  },
  button: {
    width: '75%',
    marginVertical: 10,
    marginLeft: 'auto',
    marginRight: 'auto',
  },
});

export default App;
