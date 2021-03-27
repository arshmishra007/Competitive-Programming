#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    int max = 0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    int count =0;
    for(int i =0;i<size;i++)
    {
        if(max==arr[i])
        {
            count++;
        }
    }
    cout<<count;
    
    return 0;
}
