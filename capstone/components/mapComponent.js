import React, { useState } from 'react';
import { StyleSheet, View, Text } from 'react-native';
import MapView from 'react-native-maps';
import * as Location from 'expo-location';

export default function MapComponent() {
  const [location, setLocation] = useState(null);

  useEffect(() => {
    (async () => {
      let { status } = await Location.requestForegroundPermissionsAsync();
      if (status !== 'granted') {
        console.error('Permission to access location was denied');
        return;
      }

      let location = await Location.getCurrentPositionAsync({});
      setLocation(location);
    })();
 }, []);

  return (
    // <View style={{ flex: 1, justifyContent: 'center', alignItems: 'center' }}>
    //     <Text>Chat Screen</Text>
    // </View>
    // <View style={styles.container}>
    //   <MapView style={styles.map} />
    // </View>
    <View style={styles.container}>
      {location && (
        <MapView
          style={styles.map}
          initialRegion={{
            latitude: location.coords.latitude,
            longitude: location.coords.longitude,
            latitudeDelta: 0.0922,
            longitudeDelta: 0.0421,
          }}
        >
          <MapView.Marker
            coordinate={{
              latitude: location.coords.latitude,
              longitude: location.coords.longitude,
            }}
          />
        </MapView>
      )}
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  map: {
    width: '100%',
    height: '100%',
  },
});
