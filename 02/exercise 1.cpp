#include<iostream>
#include<math.h>

using namespace std;

int main(void){
	
	double a, b, c, n;
	
	cin >> a >> b >> c; 
	
	n = b * b - 4 * a *c;
	
	if(n == 0){
		cout << "x1 = x2 =" << -b / (2 * a);
	}
	else if(n > 0){
		cout << "x1 = " << (-b + sqrt(n) )/ (2 * a) << ";";
		cout << "x2 = " << (-b - sqrt(n) )/ (2 * a) << ";";
	}
	else{
		cout << "x1 = " << -b / (2 * a) << "+" << sqrt(-n) / (2 * a) << "i;";
		cout << "x2 = " << -b / (2 * a) << "-" << sqrt(-n) / (2 * a) << "i;";
	}
	
	return 0;
}
