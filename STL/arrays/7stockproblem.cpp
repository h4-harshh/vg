// stock buy and sell problem

#include<iostream>
using namespace std;

// int max_profit(int arr[],int start,int end)
// {
//     if(start>=end)
//     {
//         return 0;
//     }
//     int profit=0;

//     for(int i=start;i<end;i++)
//     {
//         for(int j=i+1;j<=end;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 int curr_profit=arr[j]-arr[i]+max_profit(arr,start,i-1)+max_profit(arr,j+1,end);
            
//                 profit=max(profit,curr_profit);
//             }

//         }
//     }
//     return profit;
// }

//------------------------------------------------------------------------------------------------------------------------------
// efficient solution

int max_profit(int arr[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit=profit+(arr[i]-arr[i-1]);
        }
    }
    return profit;
}



int main()
{
     int n=5;
    int arr[n]={1,5,3,8,12};
    // int n=4;
    // int arr[n]={10,10,10,10};
    // int n=6;
    // int arr[n]={10,10,10,25,30,30};
    // int n=6;
    // int arr[n]={10,10,10,30,30,40};
    // int n=3;
    // int arr[n]={10,20,30};

    int start=0,end=n-1;
    // cout<<max_profit(arr,start,end)<<endl;

    cout<<max_profit(arr,n);
    return 0;
}