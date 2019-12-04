#include<iostream>
#include<cmath>

using namespace std;

class Point 
{
	private:
		double x;
		double y;
	
	public:
		Point(double x,double y)
		{
			this->x = x;
			this->y = y;
		}

		double getX()
		{
			return x;
		}

		double getY()
		{
			return y;
		}

		double distance(const Point &p) 
		{
			x -= p.x;
			y -= p.y;
			return sqrt(x*x+y*y);
		}
};

int main()
{
	Point A(1,2),B(3,4);
	cout<<A.distance(B)<<endl;
	return 0;
}
