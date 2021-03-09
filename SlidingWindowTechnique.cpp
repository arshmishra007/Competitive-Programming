#include<iostream>
#include<math.h>
using namespace std;
/*
Sliding Window Technique

Problem Statement : Given an array of integers n and positive number k ,
 we have to find the maximum sun of any contigious subarray of size k.
 
eg1 input=[2,1,5,1,3,2] , k=3
output = 9
since sub array with maximum sum is [5,1,3]

So we will use two variables 'wsum' and 'msum' 

where :
      wsum is the window sum which will keep the track of sum of the window elements
	  msum will keep the track of the max sum occured till now
	  
	  So we will traverse the complete array and calculate the window sum and then compare it with the maxsum 
*/

int MaxSum_BruteForceApproach(int arr[],int k)
{
	int maxsum = 0;
	for(int i =0;i<8-k;i++)
	{
		int wsum =0;
		for(int j = i; j<i+k;j++)
		{
			wsum+=arr[j];
		}
		//maxsum = math.max(maxsum,wsum);
		if(maxsum>wsum){
			maxsum=maxsum;
		}
		else
		{
			maxsum=wsum;
		}
	}
	return maxsum;
}

int MaxSum_SlidingWindowApproach(int arr[],int k)
{
	// logic used here is when we are changing the window then only
	// two elements are making the impact on the sum of the subarray
	// 1)The Element Getting Added 2)The left most element of the previous window which is getting removed
	// wsum +=arr[end] + arr[end - k]
	int windowsum =0;
	int maxsum = 0;
	for(int i =0;i<k;i++)
	{
		windowsum+=arr[i];
	}
	for(int end = k;end<8;end++)
	{
		windowsum+=arr[end]-arr[end-k];
		if(maxsum>windowsum)
		{
			maxsum=maxsum;
		}
		else
		{
			maxsum = windowsum;
		}
	}
	return maxsum;
}

int main()
{
	int arr[8];
	cout<<"Enter the 8 digits to be inserted into the array"<<endl;
	for(int i=0;i<8;i++)
	{
		cout<<"Enter the Element : ";
		cin>>arr[i];
		cout<<endl;
		
	}
	cout<<"MaxSum_SlidingWindowApproach : "<< MaxSum_SlidingWindowApproach(arr,4)<<endl;
	cout<<" MaxSum_BruteForceApproach : "<<MaxSum_BruteForceApproach(arr,4)<<endl;
	
	return 0;
}
