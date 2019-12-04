#include<iostream>

using namespace std;

class ring{
	public:
		int a[100];		//代表小孩儿编号的数组 
		int total;    //小孩总数 
		int maxflag;	//数到maxflag出列 
		int startpoint;		//从第startpoint个开始
	
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
	int flag = 1, p, sum = 0;	//当前数到flag
	ring r;		//创建对象实例r 
	
	int w, h, s;
	
	cout << "请按照顺序输出w、s、h的值：" << endl;
	cin >> w >> s >> h; 
	r.Init(w, s, h);  //初始化问题 
	
	r.storeID(5);  //创建储存小孩编号的数组 
	
	p = r.startpoint - 1;
	
	while(sum != r.total){
		if(p >= r.total){ 		//数组循环 
			p = 0;
		}
		
		if(r.a[p] != 0){		//跳过已经出去的孩子 
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
