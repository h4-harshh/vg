#include<bits/stdc++.h>
#include<set>
using namespace std;

// void find_ceiling(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//     int diff=INT_MAX;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]>=arr[i])
//             {
//                 diff=min(diff,arr[j]-arr[i]);
//             }
//         }
//                 // cout<<"diff="<<diff;
//         // cout<<endl; 
//     if(diff==INT_MAX)
//     {
//         cout<<-1<<" ";
//     }
//     else{
//         cout<<(diff+arr[i])<<" ";
//     }
//     }
// }

void find_ceiling(int arr[],int n)
{
    set <int> s;
    int res[n];
    for(int i=n-1;i>=0;i--)
    {
        auto it=s.lower_bound(arr[i]);
        if(it==s.end())
        {
            res[i]=-1;
            s.insert(arr[i]);
        }
        else{
            s.insert(arr[i]);
            res[i]=*it;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
}




int main()
{
    int n=6;
    int arr[n]={10,100,200,30,120,120};

    find_ceiling(arr,n);
    return 0;
}