#include<iostream>
#include"Rational.h"
#include<string>
using namespace std;

Rational::Rational(){}

Rational::Rational(int x, int y){
	numerator = x;
	denominator = y;
}

int Rational::getNumerator(){
	return numerator;
}

int Rational::getDenominator(){
	return denominator;
}

Rational Rational::add(Rational r){
	Rational a;
	
	a.numerator = numerator * r.denominator + denominator * r.numerator;
	a.denominator = denominator * r.denominator;
	
	return a;
}

Rational Rational::subtract(Rational r){
	Rational s;
	
	s.numerator = numerator * r.denominator - denominator * r.numerator;
	s.denominator = denominator * r.denominator;
	
	return s;
}

Rational Rational::multiply(Rational r){
	Rational m;
	
	m.numerator = numerator * r.numerator;
	m.denominator = denominator * r.denominator;
	
	return m;
}

Rational Rational::divide(Rational r){
	Rational d;
	
	d.numerator = numerator * r.denominator;
	d.denominator = denominator * r.numerator;
	
	return d;
}

int Rational::compareTo(Rational r){
	if(Rational::subtract(r).numerator > 0){
		return 1;
	}
	else if(Rational::subtract(r).numerator == 0){
		return 0;
	}
	else{
		return -1;
	}
}

bool Rational::equals(Rational r){
	return (numerator == r.numerator && denominator == r.denominator);
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
