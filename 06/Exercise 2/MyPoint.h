class MyPoint{
	protected:
		double x;
		double y;
	public:
		MyPoint();
		MyPoint(double, double);
		double get_x();
		double get_y();
		double distance(MyPoint);
};

class ThreeDPoint:public MyPoint{
	private:
		double z;
	public:
		ThreeDPoint();
		ThreeDPoint(double, double, double);
		double get_z();
		double distance(ThreeDPoint);
};
