#include<iostream>
#include"RationalReconsituteOperator.cpp"

using namespace std;

int main(void){
	
	Rational r1(4, 5);
	Rational r2(3, 5);
	Rational r3;
	int n;
	
	r3 = r1 + r2;
	cout << r3.toString() <<endl;
	r3 = r1 - r2;
	cout << r3.toString() <<endl;
	r3 = r1 * r2;
	cout << r3.toString() <<endl;
	r3 = r1 / r2;
	cout << r3.toString() <<endl;
	cout << r3[0] << "/" << r3[1];	
	return 0;
}
