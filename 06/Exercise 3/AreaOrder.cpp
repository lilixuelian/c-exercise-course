#include"AreaOrder.h"
#include<iostream>

using namespace std;

AreaOrder::AreaOrder(){
	size = 10;
	index = 0;
}

void AreaOrder::increase(){
	if(index == size){
		char *temp_name = new char[size + 10];
		double *temp_area = new double[size + 10];
		for(int i = 0; i < size; i++){
			temp_name[i] = name[i];
			temp_area[i] = area[i];
		}
		name = temp_name;
		area = temp_area;
		size += 10;
	}
}

void AreaOrder::push_area(Circle c){
	AreaOrder::increase();
	area[index] = c.get_area();
	name[index] = 'c';
	index++;
}

void AreaOrder::push_area(Triangle t){
	AreaOrder::increase();
	area[index] = t.get_area();
	name[index] = 't';
	index++;
}

void AreaOrder::push_area(Rectangle r){
	AreaOrder::increase();
	area[index] = r.get_area();
	name[index] = 'r';
	index++;
}

void AreaOrder::sort(){
	for(int i = 0; i < index; i++){
		for(int j = 0; j < index - i; j++){
			if(area[j] > area[j + 1]){
				swap(name[j], name[j + 1]);
				swap(area[j], area[j + 1]);
			}
		}
	}
}

void AreaOrder::show(){
	for(int i = 1; i <= index; i++){
		if(name[i] == 'r'){
			cout << "Rectangle:";
		}
		else if(name[i] == 't'){
			cout << "Triangle:";
		}
		else if(name[i] == 'c'){
			cout << "Circle:" ;
		}
		cout << area[i] << endl;
	}
}

AreaOrder::~AreaOrder(){};
void AreaOrder::swap(double & a, double & b){
	double temp;
	temp = a;
	a = b;
	b = temp;
}
void AreaOrder::swap(char & a, char & b){
	char temp;
	temp = a;
	a = b;
	b = temp;
}
