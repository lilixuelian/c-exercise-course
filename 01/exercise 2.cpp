#include<iostream>
using namespace std;

int main(){
	
	�������������д���ر𳤣�������Ӧ��������������߼���ܣ����Դ�ӡ���ζ�ά������������ðѴ�ӡд��һ������Ȼ����ã�������д����һģһ���Ĵ�ӡ��ά������� 
	
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
