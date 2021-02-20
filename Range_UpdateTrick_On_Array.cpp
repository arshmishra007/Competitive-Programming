#include<iostream>
using namespace std;

/*
we are given an array full of integers both positive and negative

we have a lot of updates in the form of x,y,val

ie : update(x,y,val) : a[x,x+1,x+2......+y] = a[x,x+1,x+2......+y] + val

that is we should add all the elements that are in the range from 
position x to position y and add to them the values y


*/

const int Nmax =10;
int arr[Nmax],b[Nmax],s[Nmax];

void Update(int x , int y , int val)
{
	b[x]=b[x]+val;
	b[y+1] = b[y+1]-val;
}

void buildFinalArray()
{
	for(int i =1;i<=10;i++)
	{
		s[i] = s[i-1] + b[i];
		arr[i] = arr[i]+s[i];
	}
}

int main()
{
	Update(1,4,5);
	Update(2,6,7);
	Update(1,9,-5);
	
	buildFinalArray();
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
