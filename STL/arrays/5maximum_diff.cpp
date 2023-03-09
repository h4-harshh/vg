#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


// int max_diff(int arr[],int n)
// {
//     int max=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         int diff;
//         for(int j=i+1;j<n;j++)
//         {
//             diff=arr[j]-arr[i];
//             if(max<diff)
//             {
//                 max=diff;
//             }
//         }
//     }
//     return max;
// }


//efficient solution

int max_diff(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int k=min(arr[0],arr[1]);

    for(int j=1;j<n;j++)
    {
        res=max(res,arr[j]-k);
        k=min(arr[j],k);
    }
    return res;

}



int main()
{
    // int n=7;
    // int arr[n]={1,4,0,6,0,3,2};
    // int n=8;
    // int arr[n]={10,5,0,0,8,0,9,0};
    int n=7;
    int arr[n]={2,3,10,6,4,8,1};
    cout<<endl;
    int k=max_diff(arr,n);
    cout<<k<<endl;

    return 0;
}