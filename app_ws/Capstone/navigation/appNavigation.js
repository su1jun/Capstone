import React, { useState, useEffect } from 'react'
import { NavigationContainer } from '@react-navigation/native';
import { createNativeStackNavigator } from '@react-navigation/native-stack';

import HomeScreen from '../screens/homeScreen';
import ConnectScreen from '../screens/connectScreen';
import HeaderComponent from '../components/headerComponent';

import { LogBox, Dimensions } from 'react-native';

const Stack = createNativeStackNavigator();

LogBox.ignoreLogs([
  'Non-serializable values were found in the navigation state',
]);

export default function AppNavigation() {
  const [isLandscape, setIsLandscape] = useState(false);

  useEffect(() => {
    const updateLayout = () => {
      const { width, height } = Dimensions.get('window');
      setIsLandscape(width > height);
    };

    // addEventListener now returns a function that removes the listener
    const unsubscribe = Dimensions.addEventListener('change', updateLayout);
    return () => unsubscribe();
  }, []);

  return (
    <NavigationContainer>
      <Stack.Navigator initialRouteName="ConnectScreen">
      <Stack.Screen 
          name="ConnectScreen" 
          component={ConnectScreen} 
          options={{ headerShown: false }}
        />
        <Stack.Screen
          name="HomeScreen"
          component={HomeScreen} 
          options={({ navigation }) => ({
            header: () => !isLandscape ? (
              <HeaderComponent title="Capstone Design" navigation={navigation} />
            ) : null,
          })}
        >
        </Stack.Screen>
      </Stack.Navigator>
    </NavigationContainer>
  )
  
}
