#include<iostream>
using namespace std;

/*fast modular exponentiation iterative approach
 example 
 first we will declare a variable ans =1
 
 
 lets compute a = 2 , n =13 that is we want to compute 2^13
 
 initially ans = 1
 
 step 1 n is odd :
 	2^13 can be written as 2*2^12 -> odd wale case mein hum ek a ko ans mein daaldenge
	 
	it will be like 2^12 * ans
	a=2 , n = 12 , ans =2

step 2 n is even :
	2^12 can be written as (2^2)^6 so instead of multiplying 2 12 times we will multiply 4 6times
	
	it will become 4^6
	
	a = 4 , n = 6 , ans = 2
	
step 3 n is even : 
	4^6 = (4^2)^3 now we will have to multiply 16 3times
	
	a = 16 , n=3 , ans =2
	
step 4 n is odd :
	16^3 == 16*16^2
	a =16 , n = 2 , ans = 2*16 = 32
	
step 5 n is even :
	16^2 == 256^1
	
	a = 256 , n =1 , ans = 32

step 6 n is odd :
	256^1 == 256 * 256^0
	
	
	ans = 32*256 kyuki hum ek a ans mein daal dete hai
	
	this implies a = 256 , n = 0 , ans = 32*256 = 8192
	
since n == 0 this implies iteration ends!!!!	
	
      
*/

// creating the function
int fastExpo(int a , long long n, int MOD)
{
	int ans =1;
	
	while(n>=1)
	{
		if(n%2==0)//that is n is an even number
		{
			a = (1LL*a*a)%MOD;
			n = n/2;
		}
		else // that is n is an odd number
		{
			ans  = (1LL*ans*a);
			n--;
		}
	}
	return ans;

}

int main()
{
	int basenum, modnum;
	long long power;
	cout<<"Enter the value of the Base Number : ";
	cin>>basenum;
	cout<<endl;
	cout<<"Enter the value of power it should be raised : ";
	cin>>power;
	cout<<endl;
	cout<<"Enter the Modulo Number : ";
	cin>>modnum;
	
	cout<<"The Result is : "<<fastExpo(basenum,power,modnum);
	
	return 0;
}
	
	
	
