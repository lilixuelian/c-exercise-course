class Circle{
	private:
		int r;
		
	public:
		Circle(int);
		Circle();
		~Circle();
		double get_area();
};

class Triangle{
	private:
		int a;
		int b;
		int c;
		
	public:
		Triangle(int, int, int);
		Triangle();
		~Triangle();
		int get_area();
};

class Rectangle{
	private:
		int width;
		int height;
		
	public:
		Rectangle(int, int);
		Rectangle();
		~Rectangle();
		int get_area();
};
