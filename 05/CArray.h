#include<iostream>

using namespace std;
class CArray{
	private:
		int *arr = new int[10];
		int size;
		int index;
		
	public:
		CArray();
		CArray(CArray &);
		void push_back(int);
		int length();
		int &operator[](int);
};
