import React, { useState } from 'react';
import { View, StyleSheet } from 'react-native';
import ImageZoom from 'react-native-image-zoom-viewer';

const IndoorMapScreen = () => {
  const [currentPosition, setCurrentPosition] = useState({ x: 100, y: 200 });

  // 현재 위치 업데이트 함수 (예시)
  const updateCurrentPosition = () => {
    // 실내 측위 기술을 사용하여 현재 위치 좌표 얻기
    const newPosition = { x: 150, y: 250 };
    setCurrentPosition(newPosition);
  };

  return (
    <View style={styles.container}>
      <ImageZoom
        imageUrls={[{ url: require('../assets/map.jpg') }]}
        renderIndicator={() => null}
        enableSwipeDown={false}
        minScale={1}
        maxScale={5}
      />
      <View
        style={[
          styles.marker,
          { left: currentPosition.x, top: currentPosition.y },
        ]}
      />
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  marker: {
    position: 'absolute',
    width: 20,
    height: 20,
    backgroundColor: 'red',
    borderRadius: 10,
  },
});

export default IndoorMapScreen;
