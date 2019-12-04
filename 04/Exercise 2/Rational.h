#include<string>
using namespace std;

class Rational{
	public:
		int numerator;
		int denominator;
		
		Rational();
		Rational(int, int);	
		int intValue();
		double doubleValue();
		string toString();
		Rational operator+(Rational);
		Rational operator-(Rational);
		Rational operator*(Rational);
		Rational operator/(Rational);
		int operator[](int);
};
