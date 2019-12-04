#include<iostream>
#include"CArray.cpp"

using namespace std;

int main(void){
	
	CArray a; //开始里的数组是空的 
	for(int i = 0; i < 5; ++i){
		a.push_back(i);
	}
	CArray a2, a3;
	a2 = a;
	for(int i = 0; i < a.length(); ++i){
		cout << a2[i] << " ";
	}
	a2 = a3; //a2是空的 
	for(int i = 0; i < a2.length(); ++i){ //a2.length()返回0 
		cout << a2[i] << " "; 
	}
	cout << endl;
	a[3] = 100;
	CArray a4(a);
	for(int i = 0; i < a4.length(); ++i){
		cout << a4[i] << " ";
	}
	return 0;
}
