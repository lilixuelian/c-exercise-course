class Child{
	public:
		int ID;
		Child * next;
		
		Child(int n){
			ID = n;
		}
		Child(){
			ID = 0;
		}
}; 
class Circle{
	public:
		int total;
		int maxflag;
		int startpoint;
		Child start;
		
		Circle(int);
		Child *getHead();
		void delChild(Child);
		void getWinner(); 
};
