class AreaOrder{
	public:
		char *name = new char[10];
		double *area = new double[10];
		int size;
		int index;
		
		AreaOrder();
		~AreaOrder();
		void sort();
		void show();
		void push_area(Circle c);
		void push_area(Rectangle r);
		void push_area(Triangle t);
		void increase();
		void swap(double&, double&);
		void swap(char&, char&);
};

