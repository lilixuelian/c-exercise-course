#include<string>
using namespace std;
class Rational{
	private:
		int numerator;
		int denominator;
		
	public:
		Rational();
		Rational(int, int);
		int getNumerator();
		int getDenominator();
		Rational add(Rational);
		Rational subtract(Rational);
		Rational multiply(Rational);
		Rational divide(Rational);
		int compareTo(Rational);
		bool equals(Rational);
		int intValue();
		double doubleValue();
		string toString();
};
