class Shape{
	public:
		double area;
		double get_area();
};
class Circle: public Shape{
	private:
		int r;
	public:
		Circle(int);
};
class Rectangle:public Shape{
	private:
		int width;
		int height;
		
	public:
		Rectangle(int, int);
		int operator==(Rectangle);
};
