#include<iostream>
#include"shape.cpp"

using namespace std;

int main(void){
	
	Rectangle r1(3, 4);
	Rectangle r2(4, 4);
	Circle c(5);
	cout << "Rectangle1's area:  " << r1.area << endl; 
	cout << "Rectangle2's area:  " << r2.area << endl; 
	cout << "Circle's area:  " << c.area << endl;
	
	if(r1 == r2){
		cout << "Rectangle1 == Rectangle2" << endl;
	} 
	else{
		cout << "Rectangle1 != Rectangle2" << endl;
	}
	
	return 0;
}
