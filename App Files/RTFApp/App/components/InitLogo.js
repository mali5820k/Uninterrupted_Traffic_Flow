import React from 'react';
import {Image, View, Text, StyleSheet} from 'react-native';

const logo = require('../images/SD.png');

const InitLogo = () => {
  return (
    <View style={styles.view}>
      <Image style={styles.logo} source={logo} />
      <Text style={styles.heading}>Road-to-Traveller Feedback</Text>
    </View>
  );
};

const styles = StyleSheet.create({
  view: {
    flex: 4,
    flexDirection: 'column',
    justifyContent: 'center',
  },
  heading: {
    color: 'white',
    fontSize: 26,
    marginTop: 10,
    marginLeft: 'auto',
    marginRight: 'auto',
  },
  logo: {
    marginLeft: 'auto',
    marginRight: 'auto',
    width: 100,
    height: 100,
    borderRadius: 20,
  },
});

module.exports = InitLogo;
