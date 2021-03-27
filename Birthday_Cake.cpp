/*
You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

Candle heights are 3,2,1,3 . The tallest candles are 3 units, and there are 2 of them

*/

#include<iostream>
using namespace std;



int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    //sorting
    for(int i=0;i<size;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   int count=0;
   int ele = arr[size-1];
   for(int i = 0;i<size;i++)
   {
       if(ele == arr[i])
       {
           count++;
       }
   }
   cout<<count;
    return 0;
}
