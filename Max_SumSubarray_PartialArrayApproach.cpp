#include<iostream>
using namespace std;

/*
Maximum Sum SubArray using the Partial Sum Approach

Here we will be using an extra array S for the partial sums

where S[i] == Sum of first five elements

sum(left,right) = S[right] - S[left-1]

So we will try to compute the sum in the O(n) time complexity

we will fix one pointer either form the left side or from the right side

let's choose the right side one

We will use a for loop for fixing the right pointer

for eg a = 5,-6,3,4,-2,3,-3

at position 5 note: starting pos =1

now at position 5 we fix the pointer now we have to find out what is the maximum sum subarray of this subarray that actually ends in this right pointer

sum(left,right) = const - s[left-1] 

we have to find it in such a way that s[left-1] is minimum

so we need to know for this right ptr what is the minimus of those sums from 1 to right-1

that is for every right pointer what is the minimum value of the partial sums i have looped so far by now
  
*/

int maxSumSubarray(int a[],int n)
{
	int s[15];
	//assuming the ans as the first element
    int ans = a[0];
    // initially initializing the minimum sum to 0
    int mins = 0;
    
    //initializing the partial sum array
    s[0]=a[0];
    
    for(int i =1;i<n;i++)
    {
    	s[i]=s[i-1]+a[i];
	}
	
	//partial array created
	
	//fixing the right array and computing the sum
	
	for(int i=0;i<n;i++)
	{
		if(s[i]-mins>ans)
		{
			ans = s[i]-mins;
		}
		//updating the mins(minsum) value
		
		if(s[i]<mins)
		{
			//we have to minimize the mins value
			mins = s[i];
		}
		
	}
	return ans;
}

int main()
{
	int size;
	cout<<"enter the size of the array : ";
	cin>>size;
	cout<<endl;
	int arr[size];
	for(int i =0;i<size;i++)
	{
		cout<<"enter the array element : ";
		cin>>arr[i];
		cout<<endl;
	}
	cout<<maxSumSubarray(arr,size);
	
	return 0;
}
