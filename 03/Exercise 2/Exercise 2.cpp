#include<iostream>
#include"StackOfIntegers.cpp"
using namespace std;

int main(void){
	StackOfIntegers stack;
	int i;
	
	for(i = 0; i <= 5; i++){
		stack.push(i * i);
	}
	cout << "size:" << stack.getSize() << endl;
	
	while(i--){
		cout << "the top of stack elements:" << stack.peek() << endl;
		stack.pop();
	}
	
	cout << "size:" << stack.getSize() << endl << "if empty(1 is true, 0 is false): " << stack.empty() << endl;
	
	return 0;
}
