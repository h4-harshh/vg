#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int printing_unique_elements(int arr[],int n)
{
    unordered_set <int> u;
    for(int i=0;i<n;i++)
    {
        u.insert(arr[i]);
    }
    int count=u.size();
    return count;

    // for(auto it=u.begin();it!=u.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    // for(int i=0;i<n;i++)
    // {
    //     if(u.find(arr[i])==u.end())
    //     {
    //         cout<<arr[i]<<" ";
    //         u.insert(arr[i]);
    //     }

    // }
    // cout<<endl;

    // for(auto it=u.begin();it!=u.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
}


int main()
{
    int n=6;
    int s=2;
    int arr[n]={30,200,200,30,200,30};

    int k=printing_unique_elements(arr,n);

    if(k>n/s)
    {
        cout<<n/s;
    }
    else{
        cout<<k;
    }
    return 0;
}