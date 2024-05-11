import { StatusBar } from 'expo-status-bar';
import MapView from 'react-native-maps';
import { StyleSheet, Text, View } from 'react-native';

const BUILDING_BOUNDS = {
  south: 37.1234,
  west: 127.1234, 
  north: 37.5678,
  east: 127.5678
};

export default function TitleScreen() {
  return (
    <View style={styles.container}>
      <MapView  
        initialRegion={{
          latitude: (BUILDING_BOUNDS.south + BUILDING_BOUNDS.north) / 2,
          longitude: (BUILDING_BOUNDS.west + BUILDING_BOUNDS.east) / 2,
          latitudeDelta: BUILDING_BOUNDS.north - BUILDING_BOUNDS.south,
          longitudeDelta: BUILDING_BOUNDS.east - BUILDING_BOUNDS.west,
        }}
        minZoomLevel={15} 
        maxZoomLevel={20}
        onRegionChangeComplete={region => {
          if (!isWithinBounds(region, BUILDING_BOUNDS)) {
            // 범위 밖이면 초기 위치로 되돌리기
            this.map.animateToRegion(INITIAL_REGION);
          }
        }}  
      />
      <Text>Open up App.js to start working on your app!</Text>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});