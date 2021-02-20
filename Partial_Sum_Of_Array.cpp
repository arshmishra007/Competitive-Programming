#include<iostream>
using namespace std;

/*
partial sums of the array

problem solved by this array is as follows

we are given an array of n elements it can contain both the positive and negative integers

we are given a lot of these queries as below :

Query(x,y) == what is the sum of all the elements btw the position of x and y

a[x] + a[x++] + .......+ a[y]

In the brute force approach worst case is O(n)


optimial solution will be O(1) per Query

So for achiving the optimal soln we will be making use of an another array known as PartialSumArray

A = [7,-2,3,9,-11,5,1,-3]

S = [7,5,8,17,6,11,12,9]

S[i] = S[i-1] + a[i]

*/

const int Nmax = 10;

int S[Nmax];

void BuildPartialSum(int arr[],int n)
{
	S[1]=arr[1];
	for(int i = 2;i<n;i++)
	{
		S[i]=S[i-1]+arr[i];
	}
}

long long Query(int x, int y)
{
	return(S[y]-S[x-1]);
}

int main()
{
	int arr[10];
	int x,y;
	cout<<"Enter 10 elements : ";
	for(int i =0;i<10;i++)
	{
		cin>>arr[i];
	}
	BuildPartialSum(arr,10);
	cout<<"Enter X index and Y index : ";
	cin>>x>>y;
	cout<<Query(x,y);
	
	return 0;
}
