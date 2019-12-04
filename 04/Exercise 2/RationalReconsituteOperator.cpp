#include<iostream>
#include"Rational.h"
#include<string>
using namespace std;

Rational::Rational(){}

Rational::Rational(int x, int y){
	numerator = x;
	denominator = y;
}

int Rational::intValue(){
	int result = numerator/denominator;
	return result;
}

double Rational::doubleValue(){
	double result = (double)numerator/denominator;
	return result;
}

string Rational::toString(){	
	int min;
	string s1, s2, s3;
	Rational r;
	
	if(numerator == 0){
		return to_string(numerator);
	}
	if(numerator < denominator){
		min = numerator;
	}
	else{
		min = denominator;
	}
	
	while(1){
		if(numerator % min == 0 && denominator % min == 0){
			numerator /= min;
			denominator /= min; 
		}
		min--;
		if(!min){
			break;
		}
	} 
	if(denominator == 1){
		return to_string(numerator);
	}
	else{
		s1 = to_string(numerator);
		s2 = to_string(denominator);
		s3 = "/";
		return s1 + s3 + s2;
	}
}

Rational Rational::operator+(Rational r){
	Rational result;
	result.numerator = r.denominator * numerator + r.numerator * denominator;
	result.denominator = r.denominator * denominator;
	
	return result;
}

Rational Rational::operator-(Rational r){
	Rational result;
	result.numerator = r.denominator * numerator - r.numerator * denominator;
	result.denominator = r.denominator * denominator;
	
	return result;
}

Rational Rational::operator*(Rational r){
	Rational result;
	result.numerator = r.numerator * numerator;
	result.denominator = r.denominator * denominator;
	
	return result;
}

Rational Rational::operator/(Rational r){
	Rational result;
	result.numerator = r.denominator * numerator;
	result.denominator = r.numerator * denominator;
	
	return result;
}

int Rational::operator[](int i){
	if(i == 0) return numerator;
	else if(i == 1) return denominator;
	else cout<< "Invalid number!" << endl;
}
