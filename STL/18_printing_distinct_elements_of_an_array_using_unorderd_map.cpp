#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void printing_unique_elements(int arr[],int n)
{
    unordered_set <int> u;
    // for(int i=0;i<n;i++)
    // {
    //     u.insert(arr[i]);
    // }

    // for(auto it=u.begin();it!=u.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    for(int i=0;i<n;i++)
    {
        if(u.find(arr[i])==u.end())
        {
            cout<<arr[i]<<" ";
            u.insert(arr[i]);
        }

    }
    cout<<endl;

    // for(auto it=u.begin();it!=u.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
}


int main()
{
    int n=6;
    int arr[n]={10,100,200,30,120,120};

    printing_unique_elements(arr,n);
    return 0;
}