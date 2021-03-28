/*
Sam’s house has an apple tree and an orange tree that yield an abundance of fruit. In the diagram below, the red region denotes his house, where s is the start point, and t is the endpoint. The apple tree is to the left of his house, and the orange tree is to its right. You can assume the trees are located on a single point, where the apple tree is at point a, and the orange tree is at point b.
When a fruit falls from its tree, it lands d units of distance from its tree of origin along the x-axis. A negative value of d means the fruit fell d units to the tree’s left, and a positive value of d means it falls d units to the tree’s right.

Given the value of d for m apples and n oranges, determine how many apples and oranges will fall on Sam’s house (i.e., in the inclusive range [s, t])?
*/

#include<iostream>
using namespace std;
int main()
{
    int s_home,t_home,a_tree,b_tree,num_app,num_ora;
    cin>>s_home>>t_home;
    cin>>a_tree>>b_tree;
    cin>>num_app>>num_ora;
    int arr1[num_app];
    int arr2[num_ora];
    for(int i=0;i<num_app;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<num_ora;i++)
    {
        cin>>arr2[i];
    }
    
    // creating reference frame for apples
    for(int i=0;i<num_app;i++)
    {
        arr1[i]=arr1[i]+a_tree;
    }
    // creating reference frame for oranges
    for(int i=0;i<num_ora;i++)
    {
        arr2[i]=arr2[i]+b_tree;
    }
    // range check
    int count1=0;
    int count2=0;
    for(int i=0;i<num_app;i++)
    {
        if(arr1[i]>=s_home && arr1[i]<=t_home)
        {
            count1++;
        }
    }
    for(int i=0;i<num_ora;i++)
    {
        if(arr2[i]>=s_home && arr2[i]<=t_home)
        {
            count2++;
        }
    }
    cout<<count1<<endl;
    cout<<count2;
    return 0;
}
