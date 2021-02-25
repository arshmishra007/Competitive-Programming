#include<iostream>
#include<math.h>
using namespace std;


/*
Longest Consecutive numbers sub array

the value of each  element is going to be between 1 to n

for example a = [3,7,1,4,2,5,3,8,10,9]

1<=a[i]<=n

We are asked o find the longest consecutive numbers sub array

consecutive numbers subarray is a subarray in which all the elements are distinct and they form  a range of values

for ex -> 3,7,1 is not a subarray of this type

but 1,4,2,5,3 is a valid one
*/

const int Nmax = 10001;

int a[Nmax],n;
// for solving this problem we need a frequency array

bool fr[Nmax];

// It is of type bool because we only want to see wether that value is inside our array or not

int longestConsecNumSubarray()
{
	// we will be going to iterate through the left pointer
	int ans = 0;
	for(int left = 0;left<n;left++)
	{
		// reinitializing the freq array for each new left pointer
		for(int i =0;i<n;i++)
		{
			fr[i]=false;
		}
		//initializing the min and max value
		int min = a[left];
		int max = a[left];
		for(int right = left;right<n;right++)
		{
			if(fr[a[right]]==true)
			{
				break;
			}
			
			fr[a[right]]=true;
			//updating the min and max value
			min = min(min,a[right]);
			max = max(max,a[right]);
			
		
		}
		
		if(right-left==max-min)
		{
			ans = max(ans,right-left+1);
		}
	}
	return ans;
}

int main()
{
	cout<<"Enter the number of elements : ";
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cout<<"Enter the element : ";
		cin>>a[i];
		cout<<endl;
	}
	
	cout<<longestConsecNumSubarray();
	return 0;
}
