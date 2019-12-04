#include"shape.h"

double Shape::get_area(){
	return area;
};
Circle::Circle(int x){
	r = x;
	area = r * r * 3.14; 
};
Rectangle::Rectangle(int x, int y){
	width = x;
	height = y;
	area = x * y;
}
int Rectangle::operator==(Rectangle r){
	if(r.area == area){
		return 1;
	}
	else{
		return 0;
	}
}
