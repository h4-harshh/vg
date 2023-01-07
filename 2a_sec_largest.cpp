//NAIVE SOLUTION
#include<bits/stdc++.h>
using namespace std;
int getlargest(int arr[],int n)
{
    int largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            largest=i;
        }

    }
    return largest;
}
int seclargest(int arr[],int n)
{
    int largest=getlargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
            {
                res=i;
            }
            else if(arr[i]>arr[res])
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