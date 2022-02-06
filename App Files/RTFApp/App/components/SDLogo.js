import React from 'react';
import {Image, StyleSheet} from 'react-native';

const logo = require('../images/SD.png');

const SDLogo = () => {
  return <Image style={styles.logo} source={logo} />;
};

const styles = StyleSheet.create({
  logo: {
    marginLeft: 'auto',
    marginRight: 'auto',
    width: 100,
    height: 100,
    borderRadius: 20,
  },
});

module.exports = SDLogo;
