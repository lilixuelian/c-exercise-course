#include<iostream>

using namespace std;

class Circle{
	public:
		int r;
		void Init(int x){
			r = x;
		}
		
		int getArea(){
			return r * r * 3.14159;
		}
}; 

void InitArray(Circle circleArray[], int quantity); //��ʼ��Բ�������� 
void sum(Circle circleArray[], int size); //��������������Բ����������������� 

int main (void){
	
	int quantity, size = 0;
	Circle circleArray[100];
	
	cout << "������Բ�ĸ���:" << endl;
	cin >> quantity;
	
	InitArray(circleArray, quantity);
	sum(circleArray, size);	
}

void InitArray(Circle circleArray[], int quantity){
	int value, i;
	
	cout << "������Բ�İ뾶��"
	for(i = 0; i < quantity; i++){
		cin >> value;
		circleArray[i].Init(value);
	}
}

void sum(Circle circleArray[], int size){
	int i = 0;
	
	while(circleArray[i].r){
		size += circleArray[i].getArea();
		i++;
	}
	
	cout << size;
}
