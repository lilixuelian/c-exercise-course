#include<iostream>
#include<string.h>
using namespace std;

string commonChars(const string& s1, const string& s2){
	string str;
	for(int i = 0; i < s1.length(); i++){
		if(s1.npos != s1.find(s2.at(i)) && str.npos == str.find(s2.at(i))){
				str += s2.at(i);
		}
	}
	return str;
}
int main(){
	string s1;
	string s2;
	string str;
	s1 = "abcd";
	s2 = "aecaten";
	str = commonChars(s1, s2);
	cout << str << endl;
}
