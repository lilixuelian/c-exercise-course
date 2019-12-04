#include"MyString.h"
#include"string.h"
#include<iostream>

using namespace std;

MyString::MyString(){
	this->m_str = NULL;
}
MyString::MyString(char* cString){
	this->m_str = cString;
}
char MyString::at(int index) const{
	if(index < length()){
		return m_str[index];
	}
	else{
		cout << "Invalid operation" << endl;
	}
};
int MyString::length() const{
	int i = 0;
	while(m_str[i] != '\0'){
		i++;
	}
	return i;
}
void MyString::clear(){
	this->m_str = NULL;
}
bool MyString::empty() const{
	if(this->m_str == NULL){
		return true;
	}
	else{
		return false;
	}
}
int MyString::compare(const MyString& s) const{
	int i = 0;
	while(i < s.length() && i < this->length()){
		if(s.at(i) < this->at(i)){
			return 1;
		}
		else if(s.at(i) > this->at(i)){
			return -1;
		}
		i++;
	}
	if(i < s.length()) return -1;
	else if(i < this->length()) return 1;
	else return 0;
}
int MyString::compare(int index, int n, MyString s) const{
	int i = 0;
	while(n-- > 0){
		if(s.at(index) < this->at(i)){
			return 1;
		}
		else if(s.at(index) > this->at(i)){
			return -1;
		}
		index++; 
		i++;
	}
	return 0;
}
void MyString::copy(char s[], int index, int n){
	m_str = new char[n + 1];
	int i;
	for(i = 0; i < n; i++){
		m_str[i] = s[index++];
	}
	m_str[n + 1] = '\0';
}
char* MyString::data() const{
	return this->m_str;
}
int MyString::find(char ch) const{
	for(int i = 0; i < this->length(); i++){
		if(m_str[i] == ch){
			return i;
		}
	}
	return -1;
}
int MyString::find(char ch, int index) const{
	for(int i = index; i < this->length(); i++){
		if(this->at(i) == ch){
			return i;
		}
	}
	return -1;
}
