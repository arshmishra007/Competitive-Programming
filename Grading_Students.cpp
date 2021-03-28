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
        // checking for multiple of 5
        int temp = arr[i];
        while(temp%5!=0)
        {
            temp = temp+1;
        }
        // once temp is the multiple of 5 it will stop
        // checking if temp <40
        
        if(arr[i]>=38)
        {
            if((temp - arr[i])<3)
            {
                arr[i]=temp;
            }
        }
    }
   for(int i=0;i<size;i++)
   {
       cout<<arr[i]<<endl;
   }
    
    return 0;
    
}
