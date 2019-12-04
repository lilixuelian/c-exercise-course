#include"Shape.h"
#include<math.h>

Circle::Circle(){};
Circle::~Circle(){};
Circle::Circle(int i){
	r = i;
}
double Circle::get_area(){
	return r * r * 3.14;
}

Triangle::Triangle(){};
Triangle::Triangle(int x, int y, int z){
	a = x;
	b = y;
	c = z;
}
Triangle::~Triangle(){};
int Triangle::get_area(){
	int p = (a + b + c) / 2;
	int size = sqrt(p * (p - a) * (p - b) * (p - c));
	
	return size;
}

Rectangle::Rectangle(){};
Rectangle::~Rectangle(){};
int Rectangle::get_area(){
	return width * height;
}
Rectangle::Rectangle(int a, int b){
	width = a;
	height = b;
}


