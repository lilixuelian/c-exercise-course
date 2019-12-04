#include "StackOfIntegers.h"

// constructor 
StackOfIntegers::StackOfIntegers(){
	size = 0;
}

// empty or not 
StackOfIntegers::empty(){
	return (size == 0 ? 1 : 0);
//	return (size == 0);
}

// return the top value in stack
StackOfIntegers::peek(){
	return elements[size - 1];
}

// push the value in the top of stack
StackOfIntegers::push(int value){
	if(size == 100){
		return 0;
	}
	else{
		size++;
		elements[size - 1] = value;
		return 1;
	}
}

// pop the value in the top of stack
StackOfIntegers::pop(){
	return elements[--size];
}

// get elements quantity in the stack
StackOfIntegers::getSize(){
	return size;
}
