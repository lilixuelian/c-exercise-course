#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(const string& s){
	int j = s.length() - 1;
	int i = 0;
	while(i < s.length() / 2){
		if(s.at(i) != s.at(j)){
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}
int main(){
	string s1 = "mom";
	string s2 = "dad";
	string s3 = "aunt";
	string s4 = "uncle";
	cout << isPalindrome(s1) << endl << isPalindrome(s2) << endl << isPalindrome(s3) << endl << isPalindrome(s4);
}
