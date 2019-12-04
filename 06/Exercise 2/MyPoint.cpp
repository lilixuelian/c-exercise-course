#include "MyPoint.h"
#include<cmath>

MyPoint::MyPoint(){
	x = 0;
	y = 0;
}
MyPoint::MyPoint(double a, double b){
	x = a;
	y = b;
} 
double MyPoint::get_x(){
	return x;
}
double MyPoint::get_y(){
	return y;
}
double MyPoint::distance(MyPoint p){
	return sqrt(pow(p.get_x() - get_x(), 2) + pow(p.get_y() - get_y(), 2));
}

ThreeDPoint::ThreeDPoint(){
	x = 0;
	y = 0;
	z = 0;
}
ThreeDPoint::ThreeDPoint(double a, double b, double c){
	x = a;
	y = b;
	z = c;
}
double ThreeDPoint::get_z(){
	return z;
}
double ThreeDPoint::distance(ThreeDPoint p){
	return sqrt(pow(p.get_x() - get_x(), 2) + pow(p.get_y() - get_y(), 2) + pow(p.get_z() - get_z(), 2));
}
