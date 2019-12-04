#include<iostream>
#include<string.h>
using namespace std;

template <class T>
bool order(T a){
	int i = 0;
	while(a[i] && a[i + 1]){
		if(a[i] > a[i + 1]){
			return 0;
		}
		i++;
	}
	return 1;
}

int main(){
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {5, 4, 3, 2, 1};
	double c[5] = {1.5, 2.5, 4.8};
	double d[5] = {4.8, 2.5, 1.5};
	cout << order(a) << endl; 
	cout << order(b) << endl;
	cout << order(c) << endl;
	cout << order(d) << endl;
} 
