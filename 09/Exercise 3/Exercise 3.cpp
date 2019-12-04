#include<iostream>
#include<string>
#include"Stack.cpp"
using namespace std;

int main(){
	Stack<int> a;
	a.push(4);
	a.push(7);
	cout << a.peek() << endl;
	cout << a.getSize() << endl;
	a.pop();
	cout << a.peek() << endl;
	a.pop();
	cout << a.empty() << endl;
}
