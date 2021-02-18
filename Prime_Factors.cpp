#include<iostream>
using namespace std;

int f[100],expo[100],len; // f will contain factors and expo will contain the exponent values

void primeFact(int n)
{
	if(n==1)
	{
		len++;
		f[len]=2;
		expo[len]=0;
	}
	int d = 2; // this will be our devisor
	while(n>1 && d*d<=n)// for o(sqrt(n))
	{
		int k = 0; // it will monitor a new factor
		while(n%d==0)
		{
			k++;
			n/=d;
		}
		if(k>0)// new factor found
		{
			len++;
			f[len]=d;
			expo[len]=k;
			
		}
		
		d++;//going to the nest number
		
			
    }
	if(n>1)
	{
		len++;
		f[len]=n;
		expo[len]=1;
	  }  
	
}

int main()
{
	int num;
	cout<<"Enter Number for Factors : ";
	cin>>num;
	primeFact(num);
	for(int i=1;i<=len;i++)
	{
		cout<<f[i]<<" "<<expo[i]<<endl;
	}
	return 0;
}
