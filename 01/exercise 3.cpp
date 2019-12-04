#include<iostream>
#include<math.h>

using namespace std;

class cTriangle{
	public:
		int n1, n2, n3;
		void Init(int n1_, int n2_, int n3_){
			n1 = n1_;
			n2 = n2_;
			n3 = n3_;
		}
		int Perimeter(){
			return n1 + n2 + n3;
		}
		float Area(){
			float p = (n1 + n2 + n3) / 2;
			return sqrt(p * (p - n1) * (p - n2) * (p - n3));
		}
};

int main (){
	
	int n1, n2, n3;
	
	cTriangle t;
	
	cout << "Please input the triangle's sizes':" << endl ;
	cin >> n1 >> n2 >> n3;
	
	while(n1 + n2 <= n3 || n1 + n3 <= n2 || n3 + n2 <= n1 || abs(n1 - n2) >= n3 || abs(n1 - n3) >= n2 || abs(n3 - n2) >= n1){
		cout<<"Invalid Triangle!" << endl;
		cin >> n1 >> n2 >> n3;
	}
	
	t.Init(n1, n2, n3);
	
	cout << t.Area() << endl << t.Perimeter();
	
	return 0;
}
