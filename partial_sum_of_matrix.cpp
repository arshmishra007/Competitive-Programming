#include<iostream>
using namespace std;

/*
Problem Statement :

We are given a matrix with n rows and m columns for eg n==m==6 so we have a 6*6 matrix

Query : sum(l1,c1,l2,c2) where :

l1,c1 -> line 1 column 1 (left coordinate)

l2,c2 -> line 2 column 2 (right coordinate)

So we have to return the sum of that sub array .

Technique used : Partial Sums On Matrix

Steps : 1)Generate a matrix of partial sums it will take o(n**2) time complexity

        2) Once matrix is generted return the sum in o(1) time complexity.
        
*/

/*int main()
{
	int size;
	int partial_sum[size][size];
	int l1,c1,l2,c2;
	cout<<"enter the size of matrix :";
	cin>>size;
	cout<<endl;
	int matrix[size][size];
	cout<<"Enter the elements of the matrix :"<<endl;
	for(int i =0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<"Enter the Element :";
			cin>>matrix[i][j];
		}
	}
	
	cout<<"Matrix Created is Shown Below :-"<<endl;
	for(int k=0;k<size;k++)
	{
		for(int l=0;l<size;l++)
		{
			cout<<matrix[k][l]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Generating the Partial Array Sum :"<<endl;
	
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size;j++)
		{
			partial_sum[i][j]=partial_sum[i][j-1]+partial_sum[i-1][j] + matrix[i][j] - partial_sum[i-1][j-1];
		}
	}
	
	cout<<"Partial Sum Matrix generated is listed below :"<<endl;
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size;j++)
		{
			cout<<partial_sum[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	
	
	
	
	cout<<"Enter the left index : ";
	cin>>l1>>c1;
	cout<<endl;
	cout<<"Enter the right index : ";
	cin>>l2>>c2;
	cout<<endl;
	
	
	cout<<"Sum of Subarray is : "<<(partial_sum[l2][c2]-partial_sum[l1-1][c2]-partial_sum[l2][c1-1]+partial_sum[l1-1][c1-1]);
	
	

    return 0;
	
	
}
*/



