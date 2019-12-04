#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
private:
	double radius;

public:
	Circle();
	Circle(double);
	double getArea();
	double getRadius();
	void setRadius(double); 
};

#endif
