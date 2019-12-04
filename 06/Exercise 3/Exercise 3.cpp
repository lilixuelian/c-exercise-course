#include<iostream>
#include"Shape.cpp"
#include"AreaOrder.cpp"

using namespace std;

int main (void){
	
	int quantity, num[3];
	char type;
	AreaOrder x;
	
	cin >> quantity;
	
	for(int i = 0; i < quantity; i++){
		cin >> type;
		if(type == 'C'){
			cin >> num[0];
			Circle c(num[0]);
			x.push_area(c);
		}
		else if(type == 'R'){
			cin >> num[0] >> num[1];
			Rectangle r(num[0], num[1]);
			x.push_area(r);
		}
		else if(type == 'T'){
			cin >> num[0] >> num[1] >> num[2];
			Triangle t(num[0], num[1], num[2]);
			x.push_area(t);
		}
	}
	
	x.sort();
	x.show();
	
	return 0; 
}
