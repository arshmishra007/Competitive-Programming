#include<iostream>
using namespace std;

const int Nmax = 10001;

bool isPrime[Nmax];

void sieveofEratosthenes(int n)
{
	// we will have to initialize all the elements of the isPrime initially as True
	
	for(int i=2;i<=n;i++)
	{
		isPrime[i] = true;
		
	}
	
	for(int i = 2;i<=n/2;i++)
	{
		if(isPrime[i] == true)
		{
			for(int j = i*2;j<=n;j=j+i)
			{
				isPrime[j]= false;//by using j we will be able to track the multiples of the prime numbers
			}
		}
	}
}


int main()
{
	int num;
	cout<<"Enter the Limit upto which we want to find prime numbers : ";
	cin>>num;
	sieveofEratosthenes(num);
	for(int i =1;i<=num;i++)
	{
		if(isPrime[i]==true)
		{
			cout<<i<<" ";
		}
	}
	return 0;
	
}
