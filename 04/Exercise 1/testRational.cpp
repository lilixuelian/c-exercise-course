#include<iostream>
#include"Rational.cpp"

using namespace std;

int main(void){
	Rational r1(5, 4);
	Rational r2(5, 7);
	Rational r3;
	
	r3 = r1.add(r2);
	cout << "intValue:"<< r3.intValue() << ", doubleValue:" << r3.doubleValue() << ", string:" << r3.toString()<< endl;
	r3 = r1.subtract(r2);
	cout << "intValue:"<< r3.intValue() << ", doubleValue:" << r3.doubleValue() << ", string:" << r3.toString()<< endl;
	r3 = r1.multiply(r2);
	cout << "intValue:"<< r3.intValue() << ", doubleValue:" << r3.doubleValue() << ", string:" << r3.toString()<< endl;
	r3 = r1.divide(r2);
	cout << "intValue:"<< r3.intValue() << ", doubleValue:" << r3.doubleValue() << ", string:" << r3.toString()<< endl;
	
	cout <<"r3 compare to r2:" << r3.compareTo(r2) << endl << "r3 compare to r1:" << r3.compareTo(r1) << endl;
	cout << "r3 equals to r2:" << r3.equals(r1) << endl;
}
