#include"CArray.h"
#include<iostream>

CArray::CArray(){
	size = 10;
	index = 0;
}

CArray::CArray(CArray & array){
	arr = array.arr;
	size = array.size;
	index = array.index;
}

void CArray::push_back(int num){
	if(index == size){
		int *temp = new int[size + 10];
		for(int i = 0; i < size; i++){
			temp[i] = arr[i];
		}
		arr = temp;
		size += 10;
	}
	arr[index++] = num;
}
 
int CArray::length(){
	return index;
}

int &CArray::operator[](int i){
	if(i > size){
		cout << "下标值超过数组长度，不合法";
	}
	return arr[i];
}
