#include<iostream>
#include"Shape.cpp"
#include<stdlib.h>
using namespace std;

myCompare(const void *a, const void *b){
	Shape **p1;
	Shape **p2;
	double area1, area2;
	p1 = (Shape**) a;
	p2 = (Shape**) b;
	area1 = (*p1)->getArea();
	area2 = (*p2)->getArea();
	if(area1 < area2){
		return -1;
	}
	else if(area1 == area2){
		return 0;
	}
	else{
		return 1;
	}
}
int main(void){
	int n, i;
	char c;
	Shape *pShape[100];
	Circle *pc; Triangle *pt; Rectangle *pr;
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> c;
		switch(c){
			case 'C': 
				double x;
				cin >> x;
				pc = new Circle(x);
				pShape[i] = pc; 
				break;
			case 'R': 
				double a, b;
				cin >> a >> b;
				pr = new Rectangle(a, b);
				pShape[i] = pr; 
				break;
			case 'T': 
				double m, n, z;
				cin >> m >> n >> z;
				pt = new Triangle(m, n, z);
				pShape[i] = pt; 
				break;
		}
	}
	qsort(pShape, n, sizeof(double), myCompare);
	for(i = 0; i < n; i++){
		pShape[i]->print();
	}
	
	return 0;
}
