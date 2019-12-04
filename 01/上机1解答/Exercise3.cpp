#include<iostream>
#include<cmath>

using namespace std;

class Ctriangle 
{
	private:
		double a;
		double b;
		double c;

	public:
	Ctriangle(double x,double y, double z)
	{
		a = x;
		b = y;
		c = z;
	}

	double getPerimeter() 
	{
		return a+b+c;
	}

	double getArea() 
	{
		double p=getPerimeter()/2;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}

	void display()
	{
		cout<<"Ctriangle " <<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<endl;
		cout<<"Perimeter:"<<getPerimeter()<<endl;
		cout<<"Area:"<<getArea()<<endl;
	}

	
};

int main()
{
	Ctriangle T(3,4,5);
	T.display();    
   
	return 0;
}
