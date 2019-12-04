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

void InitArray(Circle circleArray[], int quantity); //初始化圆对象数组 
void sum(Circle circleArray[], int size); //计算数组内所有圆的总面积并输出总面积 

int main (void){
	
	int quantity, size = 0;
	Circle circleArray[100];
	
	cout << "请输入圆的个数:" << endl;
	cin >> quantity;
	
	InitArray(circleArray, quantity);
	sum(circleArray, size);	
}

void InitArray(Circle circleArray[], int quantity){
	int value, i;
	
	cout << "请输入圆的半径："
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
