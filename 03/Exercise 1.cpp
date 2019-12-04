#include<iostream>

using namespace std;

class MyInteger{
	private:
		int value;
		
	public:	
		MyInteger(int x){
			value = x;
		}
		MyInteger(){
			value = 0;
		}
	
		int getValue(){
			return value;
		}	
};

int isEven(int);	//  even or not 
int isPrime(int);	//  Prime or not
int equals(int, MyInteger);	//  equal or not 

int main(void){

	MyInteger num1(7);
	
	isPrime(num1.getValue()) ? cout << num1.getValue() << " is a prime" << endl : cout << " is not a prime" << endl;
	isEven(num1.getValue()) ? cout << num1.getValue() << " is even" << endl : cout << " is odd" << endl;
	equals(3, num1.getValue()) ? cout << "equal" << endl : cout << "unequal" << endl;
	equals(7, num1.getValue()) ? cout << "equal" << endl : cout << "unequal" << endl;
	
	return 0;
}

//  even or not 
int isEven(int x){
	return x % 2;
}

//  Prime or not 
int isPrime(int x){
	int i;
	int flag = 1;
	for(i = 2; i < x; i++){
		if(x / i == 0){
			flag = 0;
			break;
		}
	}
	return flag;
} 

//  equal or not 
int equals(int x, MyInteger y){
	if(x == y.getValue()){
		return 1;
	}
	else return 0;
}
