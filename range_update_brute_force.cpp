#include<iostream>
using namespace std;
const int Nmax =10;
int S[Nmax];

void BuildPartialSum(int mat[][3])
{   int row1,col1,row2,col2;
    cout<<"Enter row1 and col1 : ";
	cin>>row1>>col1;
	cout<<"Enter row2 and col2 : ";
	cin>>row2>>col2; 
	int psums;
	int arr[5];int m =0;
	int arr_sum[5];
	int sum =0;
	for(int i = row1-1;i<row2;i++)
	{
		int k=0;
		for(int j = col1-1;j<col2;j++)
		{
			
			arr[k]  = mat[i][j];
			k++;
		}
		// building the partial sums
		S[0]=arr[0];
	
	    for(int l = 1;l<3;l++)
	   {
	    	S[l]=S[l-1]+arr[l];
	   }
	   
	   arr_sum[m] = S[col2]-S[col1-1];
	   m++;
	}
	
	for(int z=0;z<row2;z++)
	{
		sum = sum+arr_sum[z];
	}
   
	cout<<sum;
}

int main()
{
	
	int matrix[3][3];
	
	cout<<endl;
	cout<<"Enter the elements in the matrix :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the element :";
			cin>>matrix[i][j];
			cout<<endl;
		}
	}
	cout<<"Matrix generated is : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			cout<<matrix[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	BuildPartialSum(matrix);
	
	
	
	
	return 0;
	
}
