#include<iostream>
#include "Exercise 2/StackOfIntegers.cpp"

using namespace std;

int isPrime(int);	//  Prime or not 

int main(void){
	StackOfIntegers stack;
	int n;
	int i = 2;
	
	cout << "Please input an integer:" << endl;
	cin >> n;
	while(n != 1){
		while(n / i != 0){
			if(n % i == 0){
				stack.push(i);
				n /= i;
		}
			else{
				i++;
			}
		}	
	}
	cout << endl << "******************output******************" << endl << "This integer can be decomposed in:" << endl;
	while(stack.getSize()){
		cout << stack.pop() << endl;
	}
}
