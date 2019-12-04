#include<iostream> 
using namespace std; 

const int SIZE=3; 
typedef int Matrix[SIZE][SIZE]; 
void print(Matrix); 
void rotate(Matrix);

int main() 
{
	Matrix m={{1,2,3},{4,5,6},{7,8,9}};

	cout<<"Before matrix is rotated:"<<endl;
	print(m); 

	cout<<"After matrix is rotated:"<<endl; 
	rotate(m); 
	print(m); 
	
	return 0;
}

void print(Matrix A) 
{
	int i,j;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
			cout<<A[i][j]<<"\t";
		cout<<endl;
	} 
}

void rotate(Matrix A) 
{
	int i,j;
	Matrix temp;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
			temp[i][j]=A[SIZE-j-1][i];
	} 
	
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
			A[i][j]=temp[i][j];
	} 
} 
