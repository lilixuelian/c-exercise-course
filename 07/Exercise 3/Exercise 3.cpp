#include<iostream>
#include"Employee.cpp"
using namespace std;

int main(){
	Employee *pe = new Leader("����", "0001", "���ž���");
	pe->display();
	delete pe;
	return 0;
}
