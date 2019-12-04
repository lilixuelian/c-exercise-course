#include<iostream>

using namespace std;

class Demo{
	public:
	int id;
		Demo(int i){
			id = i;
			cout << "id =  " << id << " " <<"*********constructor" << endl;
		}
		Demo(){
			cout << "*********constructor" << endl; 
		}
		~Demo(){
			cout << "id =  " << id<< " "  << "*********deconstructor" << endl; 
		}
		Demo(Demo & c){
			id = c.id;
			cout << "id = " << id << "*********copy constructor" << endl;
		}
};

Demo Func(){
	static Demo a1(1);
	Demo a2(2);
	cout << "func" << endl;
	return a2;
}
void copy(Demo & c){
	int id = 2 * c.id;
	cout << "id = " << id  << " "  <<"*********copy()" << endl;
}
Demo a0(0); 
int main (){
	
	Demo a3(3);
	Demo a4 = a3;
	cout<< a4.id << endl;
	a3 = a0;
	a4 = 15;

	Demo * parray[3] = {new Demo(8), new Demo()};
	copy(a4);
	Demo a6(a4);
	a6 = Func();
	
	return 0;
}
