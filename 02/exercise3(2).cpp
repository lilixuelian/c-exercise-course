#include<iostream>

using namespace std;
class Child{
	public:
		int ID;
		Child *next;
		Child *before;
		Child(int n){
			ID = n;
		}
		Child(){
		}
};
class Circle{
	public:
		int total;    //С������ 
		int maxflag;	//����maxflag���� 
		int startpoint;		//�ӵ�startpoint����ʼ
		
		void Init(int n, Child &head){
			int i;
			Child first(1), pre;
				
			pre = first;
			
			for(i = 2; i <= n; i++){
				pre.next = new Child(i);
				pre.next->before = &pre;
				pre = *(pre.next);
				if(i == startpoint){
					head.next = &pre;
					cout << head.next << endl;
					cout << head.next->ID << endl;
				}
			}
			pre.next = &first;
		}
};

int main(void){
	Child head(2);
	Circle yuan;
	
	yuan.startpoint = 5;
	yuan.Init(9, head); 
	cout << head.next << endl;
	cout << head.next->ID << endl;
}

