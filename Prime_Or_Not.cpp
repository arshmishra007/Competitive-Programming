#include<iostream>
using namespace std;


bool isPrime(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int num;
	
	while(1)
	{
		cout<<"Enter the Number For Checking Prime or Not: "<<endl;
		cin>>num;
		cout<<"1 means Prime"<<endl<<"0 means Not Prime "<<endl<<"The returned value is : ";
		cout<<isPrime(num);
		return 0;
	}
}
