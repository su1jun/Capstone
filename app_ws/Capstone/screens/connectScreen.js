import React, { useState, useEffect } from 'react';
import { ScrollView, View, TextInput, Button, Text, Image, StyleSheet, StatusBar, TouchableOpacity } from 'react-native';
import { useFonts } from 'expo-font';
import { LinearGradient } from 'expo-linear-gradient';
import AsyncStorage from '@react-native-async-storage/async-storage';

const ConnectScreen = ({ navigation }) => {
  const [ip, setIp] = useState('192.168.0.10');
  const [port, setPort] = useState('5000');

    // AsyncStorage를 사용하여 데이터를 가져옵니다.
    useEffect(() => {
      const loadStoredData = async () => {
        try {
          const storedIp = await AsyncStorage.getItem('@stored_ip');
          const storedPort = await AsyncStorage.getItem('@stored_port');
          if (storedIp!== null && storedPort!== null) {
            setIp(storedIp);
            setPort(storedPort);
          }
        } catch (error) {
          console.error(error);
        }
      };
      loadStoredData();
    }, []);
  
    // 사용자가 새로운 값을 입력하면 저장소에 저장합니다.
    const saveValues = async () => {
      try {
        await AsyncStorage.setItem('@stored_ip', ip);
        await AsyncStorage.setItem('@stored_port', port);
      } catch (error) {
        console.error(error);
      }
    };
  
    const handleConnect = () => {
      navigation.navigate('HomeScreen', { ip, port });
      saveValues();
    };

  const [fontsLoaded] = useFonts({
    'NoteSans-ExtraBold': require('../assets/fonts/NotoSansKR-ExtraBold.ttf'),
    'NoteSans-Bold': require('../assets/fonts/NotoSansKR-Bold.ttf'),
    'NoteSans-Regular': require('../assets/fonts/NotoSansKR-Regular.ttf'),
    'NoteSans-Light': require('../assets/fonts/NotoSansKR-Light.ttf'),
    'NoteSans-Light': require('../assets/fonts/NotoSansKR-Light.ttf'),
    'GTF-Bold': require('../assets/fonts/GmarketSansTTFBold.ttf'),
    'GTF-Medium': require('../assets/fonts/GmarketSansTTFMedium.ttf'),
    'GTF-Light': require('../assets/fonts/GmarketSansTTFLight.ttf'),
  });

  if (!fontsLoaded) {
    return null;
  }

  return (
    <LinearGradient colors={['#448586', '#3B7374', '#36696A']} style={styles.container}>
      <ScrollView contentContainerStyle={styles.scrollView}>
        <Image source={require('../assets/images/logo.png')} style={styles.logo} />
        <Text style={styles.title}>Capstone Design</Text>
        <Text style={styles.instructions}>Select elements you want to view</Text>
        <Text style={styles.instructions}>and touch and drag you want to goal</Text>
        <Text style={styles.instructions2}>Enter the IP and Port to connect</Text>
        <View style={styles.inputContainer}>
          <Text style={styles.label}>     IP</Text>
          <TextInput
            style={styles.input}
            onChangeText={setIp}
            value={ip}
            placeholder="IP Address"
            keyboardType="numeric"
          />
        </View>
        <View style={styles.inputContainer}>
          <Text style={styles.label}>Port</Text>
          <TextInput
            style={styles.input}
            onChangeText={setPort}
            value={port}
            placeholder="Port"
            keyboardType="numeric"
          />
        </View>
        <TouchableOpacity onPress={handleConnect} style={styles.buttonContainer}>
          <View style={styles.buttonOutline}>
            <TouchableOpacity onPress={handleConnect}  style={styles.button}>
              <Text style={styles.buttonText}>CONNECT</Text>
            </TouchableOpacity>
          </View>
        </TouchableOpacity>
      </ScrollView>
      <StatusBar backgroundColor="black" barStyle="light-content" />
    </LinearGradient>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    width: '100%',
    height: '100%',
    backgroundColor: 'green',
  },
  scrollView: {
    flexGrow: 1,
    width: '100%',
    alignItems: 'center',
    justifyContent: 'center',
    paddingTop: 80,
    paddingBottom: 20,
  },
  logo: {
    width: 200,
    height: 200,
    marginTop: -80,
  },
  title: {
    fontSize: 36,
    color: '#fff',
    fontFamily: 'NoteSans-ExtraBold',
    letterSpacing: -1,
    marginTop: -10,
    marginBottom: -10,
  },
  instructions: {
    color: '#fff',
    fontSize: 16,
    fontFamily: 'NoteSans-Light',
    marginVertical: -15,
    letterSpacing: -0.5,
  },
  instructions2: {
    color: '#fff',
    fontSize: 16,
    marginTop: -10,
    marginBottom: 10,
    fontFamily: 'NoteSans-Regular',
    letterSpacing: -0.5,
  },
  inputContainer: {
    flexDirection: 'row', // Align label and input horizontally
    alignItems: 'center', // Center items vertically in the row
    marginBottom: 10,
  },
  label: {
    color: '#fff',
    fontSize: 20,
    marginRight: 10,
    fontFamily: 'GTF-Medium',
    letterSpacing: -0.5,
  },
  input: {
    height: 50,
    width: '50%',
    borderColor: 'gray',
    borderWidth: 1,
    borderRadius: 15,
    marginBottom: 5,
    paddingHorizontal: 10,
    fontSize: 16,
    backgroundColor: '#FFF',
    fontFamily: 'NoteSans-Light',
  },
  buttonContainer: {
    marginTop: 20,
    borderWidth: 2,
    borderColor: '#fff',
    borderRadius: 25,
    padding: 2,
    paddingHorizontal: 3,
  },
  // buttonOutline: {
  //   // flex: 1,
  //   justifyContent: 'center',
  //   alignItems: 'center',
  // },
  button: {
    backgroundColor: 'white',
    paddingVertical: 8,
    paddingHorizontal: 30,
    borderRadius: 22,
    borderColor: '#fff',
  },
  buttonText: {
    color: '#3B7374',
    fontSize: 18,
    fontFamily: 'GTF-Bold',
    letterSpacing: -1,
  },
});

export default ConnectScreen;
