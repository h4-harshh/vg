#include<bits/stdc++.h>
using namespace std;
bool checksorted(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
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
    bool l=checksorted(arr,n);
    if(l)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}