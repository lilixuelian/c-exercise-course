#include"Employee.h"

using namespace std;

Employee::Employee(char *name, char *no){
	this->m_name = name;
	this->m_no = no;
	cout << "Employee��Ĺ��캯�����ã�" << endl; 
} 

Employee::~Employee(){
	cout << "Employee��������������ã�" << endl; 
}

void Employee::display(){
	cout << "������" << m_name << endl << "Ա����ţ�" << m_no << endl; 
}

Leader::Leader(char *name, char *no, char *posdes):Employee(name, no){
	this->m_posdes = posdes;
	cout << "Leader��Ĺ��캯�����ã�" << endl; 
}

Leader::~Leader(){
	cout << "Leader��������������ã�" << endl;
}

void Leader::display(){
	cout << "������" << m_name << endl << "Ա����ţ�" << m_no << endl << "ְλ������" << m_posdes << endl; 
}
