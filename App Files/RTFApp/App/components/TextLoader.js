import React from 'react';
import type {Node} from 'react';
import {
  Image,
  StyleSheet,
  ActivityIndicator,
  useColorScheme,
  Text,
  View,
} from 'react-native';

const logo = require('../images/SD.png');

const TextLoader = ({text}): Node => {
  const isDarkMode = useColorScheme() === 'dark';
  return (
    <View style={styles.sectionContainer}>
      <ActivityIndicator
        size="large"
        color={isDarkMode ? '#FFCC33' : '#006633'}
      />
      <Text style={styles.loaderText}>{text}</Text>
    </View>
  );
};

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  loaderText: {
    marginLeft: 'auto',
    marginRight: 'auto',
  },
});

module.exports = TextLoader;
