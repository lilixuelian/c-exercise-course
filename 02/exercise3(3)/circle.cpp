#include<iostream>
#include"Circle.h"

using namespace std;
// constructor: constructe the circle with n elements
Circle::Circle(int n){
	int i = 2;
	start.ID = 1;
	Child *p = &start;
	Child *now;
	now = p;
	while(i <= n){
		p = new Child(i++);
		now->next = p;
		now = p;
	}
	now->next = &start;
}

// find the start child
Child* Circle::getHead(){
	Child *p = &start;
	
	while(p->ID != startpoint){
		p = p->next;
	}
			
	return p;			
}

// delete the child from the circle
void Circle::delChild(Child del){
	Child *p = &del;
			
	while(p->next->ID != del.ID){
		p = p->next;
	}
	p->next = del.next;
}

// find the last child and print the leave children in order
void Circle::getWinner(){
	Child * p = getHead();
	int flag = 1;
			
	while(p != p->next){
		if(flag == maxflag){
					
			delChild(*p);
			flag = 1;
			cout << "delete: " << p->ID << endl;
					
		}
		else{
			flag++;
			p = p->next;
		}
	}
	cout << "The winner is: " << p->ID << endl;
}
