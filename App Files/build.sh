#!/bin/sh

echo "[BUILD SCRIPT] Running react-native bundle command..."
cd RTFApp
react-native bundle --platform android --dev false --entry-file index.js --bundle-output android/app/src/main/assets/index.android.bundle --assets-dest android/app/src/main/res

echo "[BUILD SCRIPT] Running gradle bundle command..."
cd android
./gradlew bundleRelease -x bundleReleaseJsAndAssets

echo "[BUILD SCRIPT] Copying apk to current directory"
cd ../..
cp RTFApp/android/app/build/outputs/bundle/release/app-release.apk .
