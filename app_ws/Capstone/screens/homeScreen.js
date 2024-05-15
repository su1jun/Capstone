import { StyleSheet, Text, View, Alert, StatusBar } from 'react-native';
import { useFonts } from 'expo-font';
import { WebView } from 'react-native-webview';
import Modal from 'react-native-modal';

const HomeScreen = ({ route, navigation }) => {
  const [isModalVisible, setModalVisible] = useState(false);

  const [fontsLoaded] = useFonts({
    'NoteSans-ExtraBold': require('../assets/fonts/NotoSansKR-ExtraBold.ttf'),
    'NoteSans-Bold': require('../assets/fonts/NotoSansKR-Bold.ttf'),
    'NoteSans-Regular': require('../assets/fonts/NotoSansKR-Regular.ttf'),
    'NoteSans-Light': require('../assets/fonts/NotoSansKR-Light.ttf'),
    });

  if (!fontsLoaded) {
    return null;
  }

  const { ip, port } = route.params;
  const webViewUri = `http://${ip}:${port}/`;

  const handleConnectionError = () => {
    setModalVisible(true);
  };

  const closeModal = () => {
    setModalVisible(false);
    navigation.goBack();
  };

  return (
    <View style={styles.container}>
      <StatusBar backgroundColor="black" barStyle="light-content" />
      <View style={[{ width: '100%', height: '100%', flex: 1 }]}>
        <WebView
          source={{ uri: webViewUri }}
          style={{ flex: 1 }}
          onError={handleConnectionError}
        />
      </View>
      <Modal isVisible={isModalVisible} onBackdropPress={closeModal}>
        <View style={styles.modalContent}>
          <Text style={styles.modalTitle}>Connection Failed</Text>
          <Text style={styles.modalText}>
            Unable to connect to the server. Please check the IP and port and try again.
          </Text>
          <Text style={styles.modalButton} onPress={closeModal}>
            OK
          </Text>
        </View>
      </Modal>
      <StatusBar backgroundColor="black" barStyle="light-content" />
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
  // webView: {
  //   width: '100%',
  //   height: '100%',
  // },
  modalContent: {
    backgroundColor: 'white',
    padding: 22,
    borderRadius: 4,
    borderColor: 'rgba(0, 0, 0, 0.1)',
  },
  modalTitle: {
    fontSize: 20,
    marginBottom: 12,
  },
  modalText: {
    fontSize: 16,
    marginBottom: 20,
  },
  modalButton: {
    fontSize: 16,
    color: '#007AFF',
    alignSelf: 'flex-end',
  },
  });

export default HomeScreen;