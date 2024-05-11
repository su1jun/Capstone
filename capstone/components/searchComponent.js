import React, { useState } from 'react';
import { View, TextInput, TouchableOpacity, StyleSheet } from 'react-native';
import { Ionicons } from '@expo/vector-icons';

export default function SerachComponent({ navigation }) {
  const [isDrawerOpen, setIsDrawerOpen] = useState(false);
  const [searchText, setSearchText] = useState(''); // 검색 텍스트 상태 추가
  const [showSearchBar, setShowSearchBar] = useState(false);

  const handleUser = () => {
    console.log(`User for`);
      setIsDrawerOpen(true);
  };

  const handleSearch = (searchText) => {
    console.log(`Searching handling for: ${searchText}`);
    // serachText를 이용하여 검색 기능 구현
  };

  const onSearch = () => {
    console.log(`Searching on for`);
    setShowSearchBar(!showSearchBar);
 };

 return (
    <View style={styles.appBar}>
      <TouchableOpacity onPress={handleUser}>
        <Ionicons name="person-circle" size={40} color="black" />
      </TouchableOpacity>

      <TextInput
        style={styles.searchBar}
        placeholder="Search"
        onFocus={onSearch}
        onChangeText={text => setSearchText(text)}
      />

      <TouchableOpacity onPress={handleSearch}>
        <Ionicons name="search" size={35} color="black" />
      </TouchableOpacity>
    </View>
 );
};

const styles = StyleSheet.create({
 appBar: {
    flexDirection: 'row',
    justifyContent: 'space-between',
    alignItems: 'center',
    paddingHorizontal: 10,
    paddingVertical: 5,
    backgroundColor: 'transparent',
 },
 searchBar: {
    flex: 1,
    height: 35,
    borderColor: 'gray',
    borderWidth: 1,
    borderRadius: 10,

    paddingLeft: 10,
    paddingRight: 10,

    marginLeft: 10,
    marginRight: 10,
  },
});