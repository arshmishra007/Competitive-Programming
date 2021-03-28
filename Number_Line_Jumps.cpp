/*
You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
The second kangaroo starts at location x2 and moves at a rate ofv2  meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.
*/

#include<iostream>
using namespace std;
const int Nmax = 100;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    // oerforming swapping operation
    if(x1>x2)
    {
        int temp = x1;
        x1=x2;
        x2=temp;
        temp = v1;
        v1 = v2;
        v2 = temp;   
        
    }
    while(x1<x2)
    {
        x1 = x1+v1;
        x2 = x2+v2;
    }
    if(x1==x2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;
    
}
