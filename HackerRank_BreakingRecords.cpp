#include<iostream>
using namespace std;

int main()
{
    int size;
    int base_value = 0;
    int max,min;
    int count1=0,count2=0;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];       
    }
    max = arr[0];
    for(int i =0;i<size;i++)
    {
        
        if(arr[i]>max)
        {
            max = arr[i];
            count1++;
        }
        
    }
    min = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            count2++;
        }
    }
    cout<<count1<<" "<<count2;
    
}
