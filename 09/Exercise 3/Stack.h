template <class T>
class Stack{
	private:
		T elements[100];
		int size;
	public:
		Stack();
		bool empty();
		T peek();
		void push(T);
		T pop();
		int getSize();
};
