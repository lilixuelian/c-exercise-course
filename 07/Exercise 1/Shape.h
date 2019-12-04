class Shape{
	protected:
		double area;
	public:
		Shape();
		virtual double getArea();
		virtual void print();
};

class Circle:public Shape{
	private:
		double r;
	public:
		Circle();
		Circle(double);
		virtual double getArea();
		virtual void print();
};

class Rectangle:public Shape{
	private:
		double width;
		double height;
	public:
		Rectangle();
		Rectangle(double, double);
		virtual double getArea();
		virtual void print();
};

class Triangle:public Shape{
	private:
		double a;
		double b;
		double c;
	public:
		Triangle();
		Triangle(double, double, double);
		virtual double getArea();
		virtual void print();
};
