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
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
  Image,
  ActivityIndicator,
} from 'react-native';

import {Colors} from 'react-native/Libraries/NewAppScreen';

const Screens = require('./screens');

/**
 * Conclude Imports
 */

/**
 * Begin Master App Definition
 */

const App: () => Node = () => {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
    flex: 1,
  };

  let state = 1;

  let GetScreen = state => {
    switch (state) {
      default:
      case 1:
        return Screens.InitScreen();
    }
  };

  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar barStyle={isDarkMode ? 'light-content' : 'dark-content'} />
      <View
        style={{
          flex: 1,
          backgroundColor: isDarkMode ? Colors.black : Colors.white,
        }}>
        <GetScreen state={state} />
      </View>
    </SafeAreaView>
  );
};

/**
 *  Conclude Master App Definition
 */

/**
 * Begin Style Definitions
 */

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
  },
  highlight: {
    fontWeight: '700',
  },
});

/**
 * Begin Master App Definition
 */

export default App;
