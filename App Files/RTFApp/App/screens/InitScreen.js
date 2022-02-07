import React from 'react';
import {View, StyleSheet} from 'react-native';

import {InitLogo, TextLoader} from '../components';

module.exports = () => {
  return (
    <View style={styles.outerView}>
      <InitLogo />

      <View style={styles.bottomView}>
        <TextLoader text="Connecting to Central Server..." />
      </View>
    </View>
  );
};

const styles = StyleSheet.create({
  outerView: {
    flex: 1,
  },
  bottomView: {
    flex: 8,
    flexDirection: 'column',
    justifyContent: 'center',
  },
});
