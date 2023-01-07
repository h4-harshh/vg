//Efficient approach to find second largest element of an array
//NAIVE SOLUTION
#include<bits/stdc++.h>
using namespace std;
int seclargest(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])    //means arr[i]<arr[largest]
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}


int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=seclargest(arr,n);
    cout<<k<<endl;
}