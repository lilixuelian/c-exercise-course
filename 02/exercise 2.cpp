#include<iostream>

using namespace std;

class Circle{
	public:
		int r;
		Circle(int x);
		
		int getArea(){
			return r * r * 3.14159;
		}
}; 

Circle::Circle(int x){
	r = x;
}

int main (void){
	
	int quantity, i, value;
	
	Circle c1(5); //ͨ�����룬�ɹ������뾶Ϊ5��c1Բ���� 
	 
	Circle circleArray[100];  //�޷�ͨ�����룬no matching function for call to 'Circle::Circle()'; 
	
	
}
