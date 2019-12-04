#include<iostream>
using namespace std;

int main(){
	
	不建议把主函数写得特别长，主函数应该是整个程序的逻辑框架，所以打印两次二维数组这种事最好把打印写成一个函数然后调用，而不是写两段一模一样的打印二维数组代码 
	
	int COL, ROW, arr[100][100];
	int i, j;
	
	cout << "Please input the arr's row:" ;
	cin >> ROW;
	cout << "Please input the arr's column:";
	cin >> COL;
	cout << "Please input the array." << endl;
	
	for(i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++){
			cin >> arr[i][j];
		}
	}
	
	for(j = 0; j < COL; j++){
		for(i = ROW - 1; i >= 0; i--){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
} 
