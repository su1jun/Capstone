import React from 'react';
import { useFonts } from 'expo-font';
import { View, Text, StyleSheet, StatusBar, Dimensions } from 'react-native';
import { Header, Icon } from 'react-native-elements';
import { LinearGradient } from 'expo-linear-gradient';
import { SafeAreaView, useSafeAreaInsets } from 'react-native-safe-area-context';

const headerComponent = ({ title, navigation }) => {
    const insets = useSafeAreaInsets();
    const deviceHeight = Dimensions.get('window').height;

    const [fontsLoaded] = useFonts({
        'NoteSans-ExtraBold': require('../assets/fonts/NotoSansKR-ExtraBold.ttf'),
        'NoteSans-Bold': require('../assets/fonts/NotoSansKR-Bold.ttf'),
        'NoteSans-Regular': require('../assets/fonts/NotoSansKR-Regular.ttf'),
    })

    if (!fontsLoaded) {
        return null;
    }

    return (
        <View style={{ backgroundColor: '#fff' }}>
            <StatusBar backgroundColor="black" barStyle="light-content" />
            <LinearGradient
                colors={['#498D8E', '#3B7374']}
                start={{ x: 0, y: 0 }}
                end={{ x: 1, y: 0 }}
                style={styles.gradient}
            >   
            <Header
            // placement="center"
            leftComponent={
                <Icon 
                    name="arrow-back" 
                    color="#fff" 
                    onPress={() => navigation.goBack()}
                    style={styles.iconContainer}
                    size={36}
                />
            }
            centerComponent={
                <Text style={styles.headerTitle}>Capstone Design</Text>
            }
            rightComponent={
                <Icon 
                    name="more-vert"
                    color="#fff"
                    // onPress={() => navigation.navigate('Settings')} 
                    style={styles.iconContainer}
                    size={36}
                />}
            containerStyle={[styles.headerContainer, { height: 55 + insets.top }]}
            />
            </LinearGradient>
            <StatusBar backgroundColor="black" barStyle="light-content" />
        </View>
    );
};

const styles = StyleSheet.create({
  gradient: {
    width: '100%',
  },
  headerContainer: {
    // flexDirection: 'row',
    backgroundColor: 'transparent',
    justifyContent: 'space-around',
    borderBottomWidth: 0,
  },
  headerTitle: {
    color: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
    fontSize: 24,
    fontFamily: 'NoteSans-Bold',
    marginTop: -16,
  },
  iconContainer: {
    height: '100%',
    justifyContent: 'center',
  },
});

export default headerComponent;
