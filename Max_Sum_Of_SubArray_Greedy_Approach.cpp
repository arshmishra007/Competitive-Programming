// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int ans = a[1], sum = 0;//max_so_far : ans , max_ending_here : sum

	for (int i = 0; i < size; i++)
	{
		sum = sum + a[i];
		if (sum>ans)
			ans = sum;

		if (sum < 0)
			sum=0;
	}
	return ans;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {5,-6,3,4,-2,3,-3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}

