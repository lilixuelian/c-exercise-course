#include<iostream>
#include"circle.cpp"
using namespace std;


int main(void){
	
	Circle c(5);
	c.startpoint = 2;
	c.maxflag = 3;
	c.getWinner();
	
	
	return 0;
}
