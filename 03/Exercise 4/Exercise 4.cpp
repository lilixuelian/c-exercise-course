#include<iostream>

using namespace std;

class Rectangle{
	private:
		int width;
		int height;
		
	public:
		static int sumSize;		 
		static int sumCount;	 
		
		Rectangle(int x, int y){
			width = x;
			height = y;
			sumSize += x * y;
			sumCount++;
		}
};
int Rectangle::sumCount = 0;
int Rectangle::sumSize = 0;

int main (void){
	
	Rectangle x(4, 3);
	Rectangle y(4, 3);
	
	cout << "sum size:" << y.sumSize << endl << "sum count:" << y.sumCount << endl;
	
	return 0;
}
