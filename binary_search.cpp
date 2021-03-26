#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size, int target)
{
	int left = 0;
	int right = size-1;
	while(left<right)
	{
		int mid = (left+right)/2;
		
		if(arr[mid]==target)
		  return mid;
		else if(arr[mid]<target)
		{
			left = mid+1;
		  }  
		  else
		  {
		  	right = mid-1;
		  }
	}
	return -1;
}
int main()
{
	int size,ele,op;
	cout<<"enter the sie of the array :";
	cin>>size;
	cout<<endl;
	int arr[size];
	for(int i =0;i<size;i++)
	{
		cout<<"enter the element: ";
		cin>>arr[i];
		cout<<endl;
		
	}
	cout<<"Enter the element to search :";
	cin>>ele;
	cout<<endl;
	
	cout<<"Performing Binary Search:"<<endl;
	op = BinarySearch(arr,size,ele);
	cout<<"Element present at position :"<<op+1;
	
	return 0;
	
}
