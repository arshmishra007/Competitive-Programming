#include<iostream>
using namespace std;

/*
Fast Modular Exponentiation

We have to compute a^n%MOD

So for computing a^n we will calculate it using two cases

if n is even then a^n == (a^(n/2))^2

if n is odd then a^n == a * a^(n-1)

for eg if we have to compute 3^10

step 1 : n is even 3^10 == (3^5)^2

step 2 : in the expression 3^5 n is odd 
	3^5 == 3*3^4
step 3 : in the expression 3^4 n is even 
	3^4 == (3^2)^2

step 4 : in the expression 3^2 n is even
	it will be same as 3^2 = 9		

*/


int fastExpo(int a , long long n, int MOD)
{
	if(n==0)
	{
		return 1;
	}
	if(n%2==0)//ie n is even
	{
		//a^n = (a^2)^(n/2)
		return fastExpo((1LL*a*a)%MOD,n/2,MOD);
	}
	
	return (1LL*a*fastExpo(a,n-1,MOD))%MOD;
	
}

int main()
{
	int basenum , modnum;
	long long power;
	cout<<"Enter the base number : ";
	cin>>basenum;
	cout<<endl;
	cout<<"Enter the Power to be raised : ";
	cin>>power;
	cout<<endl;
	cout<<"Enter the Mod Value : ";
	cin>>modnum;
	cout<<endl;
	cout<<"The Result Is : "<<fastExpo(basenum,power,modnum);
	
	return 0;
}
