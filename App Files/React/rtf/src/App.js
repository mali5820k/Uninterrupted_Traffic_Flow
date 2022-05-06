import logo from './sd_round.png';
import React, {useEffect} from 'react';
import './App.css';
import {io} from 'socket.io-client';
import Unity, {UnityContext} from 'react-unity-webgl';

var stateData = {};
var useUncompressed = false;
var unityLoaded = false;
var unityContext;

function CarButton(props) {
  let carStr = `tag${props.number}`;
  if (stateData.carData && stateData.carData[carStr]) {
    return(
      <button
        className="CarButton"
        onClick={ () => {
          props.thisref.setState(() => {
            return({
              selectedCar: carStr,
            });
          });
        }}
      >
        {`Car ${props.number}`}
      </button>
    );
  } else return;
}

class App extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      selectedCar: null,
      dataAvailable: false,
    }

    // Determine URI and start SocketIO if not already done
    if (!this.socketio) {
      let url = `${window.location}`;
      let socket_uri = url.replace('http', 'ws').replace('3000', '5000');
      //let socket_uri = `${url}socketio`;
      console.log(`Initializing socketio with URI ${socket_uri}`);
      this.socketio = io(socket_uri);

      // Add listeners
      console.log('Adding global data update listener')
      this.socketio.on('data update', data => {
        console.log('New Data', data);
        stateData = data;
        if (this.unityUpdate) {
          console.log("Passing new data to unityUpdate");
          this.unityUpdate(data);
        }
      });

      this.socketio.on('synchronization', () => {
        console.log('Sync signal received');
        if (unityLoaded && unityContext) {
          unityContext.send(
            'Event_Listener_From_React',
            'User_Green_Arrow_Status',
            'start twoway',
          );
        }
      });
    }
  }

  shouldComponentUpdate(nextProps, nextState) {
    console.log('debug', this.state, nextState);
    if (this.state.dataAvailable !== nextState.dataAvailable) {
      // Re-render if dataAvailable changes to true
      return true;
    } else if (this.state.selectedCar == null && nextState.selectedCar) {
      // Re-render if user selects a car
      return true;
    } else return false;
  }

  ackData = () => {
    this.setState(() => {
      return ({
        dataAvailable: true,
      });
    });
  };

  render() {
      // Start UnityContext if user has selected a car
      if (!unityContext && this.state.selectedCar) {
        // Start UnityContext
        unityContext = new UnityContext({
          loaderUrl: useUncompressed ? 'Build/Uncompressed.loader.js' : 'Build/unity.loader.js',
          dataUrl: useUncompressed ? 'Build/Uncompressed.data' : 'Build/unity.data.unityweb',
          frameworkUrl: useUncompressed ? 'Build/Uncompressed.framework.js' : 'Build/unity.framework.js.unityweb',
          codeUrl: useUncompressed ? 'Build/Uncompressed.wasm' : 'Build/unity.wasm.unityweb',
        });

        // Define update function for passing data to Unity
        this.unityUpdate = newData => {
          console.log("Received data in unityUpdate");
          if (this.state.selectedCar && unityLoaded) {
            let data = newData;
            let carData = data.carData[this.state.selectedCar];
            unityContext.send(
              'Event_Listener_From_React',
              'User_Car_Position',
              `${carData.position[0]} ${carData.position[1]}`,
            );
            unityContext.send(
              'Event_Listener_From_React',
              'User_Heading',
              `${carData.heading}`,
            );
            console.log("Sent to unity");
          }
        };
      } else if (!this.state.selectedCar) {
        this.socketio.on('data update', this.ackData);
        if (this.state.dataAvailable) {
          return(
            <div className = "App">
              <header className = "App-header">
                <img src={logo} className="App-logo" alt="logo" />
                <h1>
                  Maximum Uninterrupted Traffic Flow
                </h1>
                <h2>
                  Road-to-Traveler Feedback
                </h2>
                <p>
                  Select Vehicle
                </p>
                <CarButton thisref={this} number="1" />
                <CarButton thisref={this} number="2" />
                <CarButton thisref={this} number="3" />
                <CarButton thisref={this} number="4" />
                <CarButton thisref={this} number="5" />
                <CarButton thisref={this} number="6" />
              </header>
            </div>
          );
        } else {
          return(
            <div className = "App">
              <header className = "App-header">
                <img src={logo} className="App-logo" alt="logo" />
                <h1>
                  Maximum Uninterrupted Traffic Flow
                </h1>
                <h2>
                  Road-to-Traveler Feedback
                </h2>
                <p>
                  Waiting for data from Central Server...
                </p>
              </header>
            </div>
          );
        }
      }

      const UnityView = () => {
        console.log('Rendering UnityView');
        // Parse and package data for Unity Setup function
        let thisCarData,
          topLeft,
          topRight,
          bottomLeft,
          bottomRight,
          grid_res_string,
          initialData;

        let data = stateData;
        useEffect(() => {
          // Run once when Unity is first loaded
          unityContext.on('loaded', () => {
            // Update state
            console.log('unityContext.on loaded');
            unityLoaded = true;
            //this.setState(() => {
            //  return ({
            //  unityLoaded: true,
            //  });
            //});

            // Push Setup message
            console.log('Pushing setup message to Unity');
            unityContext.send(
              'Event_Listener_From_React',
              'Setup',
              JSON.stringify(initialData),
            );
          });
        }, [initialData]);

        if (!data.carData) {
          console.log('No car data, aborting Unity Render');
          return (
            <p>
              No data received from central server. Please try again
            </p>
          );
        }
        thisCarData = data.carData[this.state.selectedCar];
        topLeft = data.carData.tag100;
        topRight = data.carData.tag101;
        bottomLeft = data.carData.tag102;
        bottomRight = data.carData.tag103;
        grid_res_string = `${topLeft.position[0]} ${topLeft.position[1]} ${topRight.position[0]} ${topRight.position[1]} ${bottomLeft.position[0]} ${bottomLeft.position[1]} ${bottomRight.position[0]} ${bottomRight.position[1]}`;
        initialData = {
          position: `${thisCarData.position[0]} ${thisCarData.position[1]}`,
          heading: `${thisCarData.heading}`,
          grid_resolution: grid_res_string,
          green_arrow_status: 'reset',
          green_arrow_period: `${data.lightPeriod}`,
        };

        // Draw unity in div
        console.log('Drawing unity');
        return (
          <Unity
            style={{ width: '100%', flex: 1 }}
            unityContext={unityContext}
          />
        );
      }
    return (
      <div className="App">
        <header className="App-header">
          <UnityView />
        </header>
      </div>
    );
    /*
    return (
      <div className="App">
        <header className="App-header">
          <img src={logo} className="App-logo" alt="logo" />
          <p>
            Edit <code>src/App.js</code> and save to reload. ZTest
          </p>
          <a
            className="App-link"
            href="https://reactjs.org"
            target="_blank"
            rel="noopener noreferrer"
          >
            Learn React
          </a>
        </header>
      </div>
    );
    */
  }
}

export default App;
