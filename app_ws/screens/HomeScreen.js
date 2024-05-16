import React, { useEffect, useState } from 'react';
import { StyleSheet, Text, View, Dimensions } from 'react-native';
import { StatusBar } from 'expo-status-bar';
import { Header } from 'react-native-elements';
import { LinearGradient } from 'expo-linear-gradient';
import { useFonts } from 'expo-font';
import { getStatusBarHeight } from 'react-native-status-bar-height';
import { WebView } from 'react-native-webview';

const HomeScreen = () => {
 const deviceHeight = Dimensions.get('window').height;
 const statusHeight = 90; // deviceHeight * 0.1;
 const squareHeight = deviceHeight * 0.8; // Adjusted to 80% of the device's height
 const bottomHeight = 100; // deviceHeight * 0.1;

 const statusBarHeight = getStatusBarHeight();

 const [fontsLoaded] = useFonts({
    'NoteSans-Regular': require('../assets/fonts/NotoSansKR-Bold.ttf'),
  });

  if (!fontsLoaded) {
    return null;
  }

 return (
    <View style={styles.container}>
      <View style={[styles.headerContainer, { marginTop: -statusBarHeight*5, height: statusHeight }]}>
        <LinearGradient
          colors={['#498D8E', '#3B7374']} // Define your gradient colors here
          style={styles.gradient}
        >
          <Header
            leftComponent={{ icon: 'menu', color: '#fff', size: 40, marginTop: 5 }}
            centerComponent={{ text: 'Capstone Design', style: { color: '#fff', fontSize: 24, fontFamily: 'NoteSans-Regular', marginTop: -10 } }}
            rightComponent={{ icon: 'search', color: '#fff', size: 40, marginTop: 5 }}
            backgroundColor="transparent" // Make the header background transparent to show the gradient
          />
        </LinearGradient>
      </View>
      <View style={[styles.square, { height: squareHeight }]}>
      <WebView
        source={{ uri: 'http://192.168.0.6:5000/' }}
        // style={styles.webView}
      />
      </View>
      <Text style={styles.bottomText}>Test Screen</Text>
      <StatusBar style="auto" />
    </View>
 );
};

const styles = StyleSheet.create({
 container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
 },
 headerContainer: {
    // paddingTop: 50, // Adjust this value to add space between the header and the top of the screen
 },
 gradient: {
    width: '100%',
 },
//  square: {
//     width: '100%',
//     backgroundColor: 'black',
//  },
 square: {
  width: '100%',
  // flex: 1,
  // marginTop: Constants.statusBarHeight,
},
 bottomText: {
    position: 'absolute',
    bottom: 25,
    alignSelf: 'center',
    color: '#3B7374',
    fontSize: 28,
    fontFamily: 'NoteSans-Regular'
 },
});

export default HomeScreen;