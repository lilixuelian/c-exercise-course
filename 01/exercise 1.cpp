#include<iostream>

using namespace std;

int main(){
	
	char c;
	int num1, num2, res;
	
	cout << "Please input the number and the symbol in this way: number1 symbol number2" << endl;
	cin >> num1 >> c >> num2;
	
	while(c != '+' && c != '-' && c != '*' && c != '/'){
		cout << "Invalid operator!";
		cin >> num1 >> c >> num2;
	}
	while(c == '/' && num2 == 0){
		cout << "Divided by zero!";
		cin >> num1 >> c >> num2;
	}
	
	if(c == '+'){
		cout << (num1 + num2) << endl;
	}
	else if(c == '-'){
		cout << (num1 - num2) << endl;
	}
	else if(c == '*'){
		cout << (num1 * num2) << endl;
	}
	else if(c == '/'){
		cout << (num1 / num2) << endl;
	}
	
//	用switch可能会更清晰一些： 
	switch(c){
		case
		case
		case
		case '/':
			if(y == 0)
				cout << "Divided by zero!";
			else
				cout << x / y
		default :
			cout << "Invalid operator!" 
	} 
	
	
	
	
	return 0;
} 
