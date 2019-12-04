#include"Stack.h"
#include<string>
template<class T> 
Stack<T>::Stack(){
	size = 0;
}
template<class T> 
bool Stack<T>::empty(){
	if(!size) return true;
	else return false;
}
template<class T> 
T Stack<T>::peek(){
	return elements[size - 1];
}
template<class T> 
void Stack<T>::push(T a){
	this->elements[size] = a;
	size++;
} 
template<class T> 
T Stack<T>::pop(){
	size--;
	return elements[size];
}
template<class T> 
int Stack<T>::getSize(){
	return size;
}
