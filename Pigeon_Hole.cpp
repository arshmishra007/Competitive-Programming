#include<iostream>
using namespace std;

/*
Statement : if there are n+1 pigeons and we have to place them in n holes 
            then atleast one hole will contain two or more pigeons
            
Problem Statement : Given an integer n find a number consisting only of digits 0 and 1 which are divisible by n.


So we want a number divisible by n and contains only 0s and 1s

So in our case the pigeons are going to be the remainder modulo n

So there are exactly n remainders modulo n ie 0,1,2,.....,n-1

0 is our actual remainder that we want

Now we will try out the first n numbers containing the digits 1

for eg 
1
11
111
1111
.
.
.

So if n numbers don't have 0 remainders then they have one of the n-1 remainders

numbers : pigeons

remainders : holes

So there are atleast one hole that has two numbers in it.

for eg 1st number is 1111....111 upto i times

for eg 2nd number is 1111.......1111 upto j times

assume i<j

If we subtract the smaller number from the larger one then we will have a number like 1111...00..

Where 1 will be present j-i times and 0 will be present i times

this number consist of 1s and 0s and will be divisible by n since both numbers have same remainder and their difference will be divisible by n

So What We do :

1_We try out these n numbers and if we get a number which is divisible by n then we got the solution

If we don't get the solution we just try out each number untill we find a number that has a remainder that has already appeared.

We check that using the frequency array.
            

*/

const int Nmax = 1000;

int freq[Nmax];

void findNumbers(int n)
{
	int current_rem = 0;
	for(int i=1;i<n;i++)
	{
		current_rem = (current_rem*10+1)%n;
		if(current_rem==0)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<1;
			}
			return;
		}
		if(freq[current_rem]!=0)
		{
			for(int j=1;j<=i-freq[current_rem];j++)
			{
				cout<<1;
			}
			return;
		}
		freq[current_rem]= i;
	}
}

int main()
{
	findNumbers(7);
	return 0;
}
