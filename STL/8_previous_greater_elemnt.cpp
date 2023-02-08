#include<iostream>
#include<vector>
using namespace std;

// vector<int>
void span(int arr[],int n)
{
    // vector <int> v;
    for(int i=0;i<n;i++)
    {
        int span=0;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
            {
                // v.push_back(arr[j]);
                cout<<arr[j]<<" ";
                span=1;
                break;
            }
        }
        if(span!=1)
        {
            cout<<"-1"<<" ";
        }
      
    }
}


int main()
{
    int n=7;
    int arr[n]={15,10,18,12,4,6,28};
    // vector <int> s=
    span(arr,n);

    // for(int x:s)
    //     cout<<x<<" ";
    // return 0;
}