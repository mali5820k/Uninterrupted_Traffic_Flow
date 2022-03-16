import React from 'react';
import {SafeAreaView, StatusBar, View, StyleSheet} from 'react-native';

import {InitLogo, TextLoader} from '../components';

module.exports = options => {
  const styles = StyleSheet.create({
    backgroundStyle: {
      backgroundColor: options.isDarkMode ? '#000' : '#fff',
    },
    outerView: {
      flex: 1,
    },
    bottomView: {
      flex: 8,
      flexDirection: 'column',
      justifyContent: 'center',
    },
  });

  return (
    <SafeAreaView style={styles.backgroundStyle}>
      <StatusBar
        barStyle={options.isDarkMode ? 'light-content' : 'dark-content'}
      />
      <View style={styles.outerView}>
        <InitLogo />

        <View style={styles.bottomView}>
          <TextLoader text="Connecting to Central Server..." />
        </View>
      </View>
    </SafeAreaView>
  );
};
