import React from 'react';
import {
  NativeModules,
  SafeAreaView,
  StatusBar,
  View,
  StyleSheet,
} from 'react-native';
import {DBRRNCamera} from 'rn-mobile-barcode-scanner';
import Canvas from 'react-native-canvas';

class VehicleSelectionScreen extends React.Component {
  state = {
    license: 'MIT',
    barcodeFormat:
      DBRRNCamera.Constants.DynamsoftBarcodeFormats.BarcodeFormat.QR_CODE,
    barcodeFormat2:
      DBRRNCamera.Constants.DynamsoftBarcodeFormats.BarcodeFormat2.NULL,
    type: 'back',
    canDetectBarcode: false,
    barcodes: [
      {
        type: '',
        data: '',
        localizationResult: [],
      },
    ],
  };

  render = props => {
    const styles = StyleSheet.create({
      backgroundStyle: {
        backgroundColor: props.isDarkMode ? '#000' : '#fff',
      },
    });

    return (
      <SafeAreaView style={this.styles.backgroundStyle}>
        <StatusBar
          barStyle={props.isDarkMode ? 'light-content' : 'dark-content'}
        />

        {/* Screen Content */}
      </SafeAreaView>
    );
  };
}

module.exports = VehicleSelectionScreen;
