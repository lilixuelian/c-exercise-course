class StackOfIntegers{
	private:
		int elements[100];
		int size;
		
	public:
		StackOfIntegers();
		StackOfIntegers(int[]);
		int empty();
		int peek();
		int push(int);
		int pop();
		int getSize();
};

