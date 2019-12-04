#include<iostream>
#include<math.h>

using namespace std;

class CPoint{
	public:
		int a, b, c, d;
		void Init (int a_, int b_, int c_, int d_){
			a = a_;
			b = b_;
			c = c_;
			d = d_;
		}
		
		const int & p1x = a;
		const int & p1y = b;
		const int & p2x = c;
		const int & p2y = d;
		
		double Distance(){
			return sqrt( pow((p1x - p2x), 2) + pow((p1y - p2y), 2) );
		}
};

int main(){
	
	int a, b, c, d;
	
	CPoint p;
	
	cout << "Please input the points in this way: x1 y1 x2 y2" << endl;
	cin >> a >> b >> c >> d;
	
	p.Init(a, b, c, d);
	cout << "The distance between the two points is :"<< endl << p.Distance() << endl;
	
	return 0;
}
