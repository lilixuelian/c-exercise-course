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
	
	Circle c1(5); //通过编译，成功创建半径为5的c1圆对象； 
	 
	Circle circleArray[100];  //无法通过编译，no matching function for call to 'Circle::Circle()'; 
	
	
}
