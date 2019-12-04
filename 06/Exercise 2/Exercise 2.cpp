#include"MyPoint.cpp"
#include<iostream>

using namespace std;

int main(void){
	
	ThreeDPoint p1;
	ThreeDPoint p2(10, 30, 25.5);
	
	cout << p1.distance(p2);
	
	return 0;
}
