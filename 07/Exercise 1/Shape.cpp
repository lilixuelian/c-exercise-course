#include"Shape.h"
#include<math.h>
#include<iostream>

using namespace std;

Shape::Shape(){
	area = 0;
}
void Shape::print(){};
double Shape::getArea(){
	return area;
};

Circle::Circle(){
	r = 0;
	area = 0;
}
Circle::Circle(double r){
	this->r = r;
	area = r * r * 3.14;
}
double Circle::getArea(){
	return area;
}
void Circle::print(){
	cout << "Circle:" << getArea() << endl; 
}

Rectangle::Rectangle(){
	width = 0;
	height = 0;
	area = 0;
}
Rectangle::Rectangle(double width, double height){
	this->width = width;
	this->height = height;
	area = width * height;
}
double Rectangle::getArea(){
	return area;
}
void Rectangle::print(){
	cout << "Rectangle:" << getArea() << endl; 
}

Triangle::Triangle(){
	a = 0;
	b = 0;
	c = 0;
	area = 0;
}
Triangle::Triangle(double a, double b, double c){
	this->a = a;
	this->b = b;
	this->c = c;
	double p = (a + b + c) / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
}
double Triangle::getArea(){
	return area;
}
void Triangle::print(){
	cout << "Triangle:" << getArea() << endl;
}

