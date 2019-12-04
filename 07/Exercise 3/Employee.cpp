#include"Employee.h"

using namespace std;

Employee::Employee(char *name, char *no){
	this->m_name = name;
	this->m_no = no;
	cout << "Employee类的构造函数调用！" << endl; 
} 

Employee::~Employee(){
	cout << "Employee类的析构函数调用！" << endl; 
}

void Employee::display(){
	cout << "姓名：" << m_name << endl << "员工编号：" << m_no << endl; 
}

Leader::Leader(char *name, char *no, char *posdes):Employee(name, no){
	this->m_posdes = posdes;
	cout << "Leader类的构造函数调用！" << endl; 
}

Leader::~Leader(){
	cout << "Leader类的析构函数调用！" << endl;
}

void Leader::display(){
	cout << "姓名：" << m_name << endl << "员工编号：" << m_no << endl << "职位描述：" << m_posdes << endl; 
}
