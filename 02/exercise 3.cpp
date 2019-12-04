#include<iostream>

using namespace std;

class ring{
	public:
		int a[100];		//����С������ŵ����� 
		int total;    //С������ 
		int maxflag;	//����maxflag���� 
		int startpoint;		//�ӵ�startpoint����ʼ
	
		void del(int i){
			a[i] = 0;
		}
		void Init(int w, int s, int n){
			total = n;
			maxflag = s;
			startpoint = w;
		}
		void storeID(int total){
			int i;
			for(i = 0; i < total; i++){
				a[i] = i + 1;
			}
		} 
		void print(int p){
			cout << a[p] << endl;
		}
};


int main(void){
	int flag = 1, p, sum = 0;	//��ǰ����flag
	ring r;		//��������ʵ��r 
	
	int w, h, s;
	
	cout << "�밴��˳�����w��s��h��ֵ��" << endl;
	cin >> w >> s >> h; 
	r.Init(w, s, h);  //��ʼ������ 
	
	r.storeID(5);  //��������С����ŵ����� 
	
	p = r.startpoint - 1;
	
	while(sum != r.total){
		if(p >= r.total){ 		//����ѭ�� 
			p = 0;
		}
		
		if(r.a[p] != 0){		//�����Ѿ���ȥ�ĺ��� 
			if(flag == r.maxflag && r.a[p] != 0){
				r.print(p);
				r.del(p); 
				p++;
				flag = 1;
				sum++;
			}
			else{
				flag++;
				p++;
			}
		}
		else{
			p++;
		}
	}
	
	
	return 0;
} 
