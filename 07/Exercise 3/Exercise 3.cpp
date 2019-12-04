#include<iostream>
#include"Employee.cpp"
using namespace std;

int main(){
	Employee *pe = new Leader("张三", "0001", "部门经理");
	pe->display();
	delete pe;
	return 0;
}
