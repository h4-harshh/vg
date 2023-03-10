//rain water trapping problem
#include<iostream>
using namespace std;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//------------------------------------------------------------------------------------------
//naive solution
// int trapping(int arr[],int n)
// {
//     int res=0;
//     for(int i=1;i<n-1;i++)
//     {


//         int lmax=arr[i];
//         for(int j=0;j<i;j++)
//         {
//             lmax=max(lmax,arr[j]);
//         }

//         int rmax=arr[n-1];
//         for(int j=n-2;j>=i;j--)
//         {
//             rmax=max(rmax,arr[j]);
//         }

//         res=res+(min(lmax,rmax)-arr[i]);

//     }
//     return res;
// }
//-------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------
//efficient solution

int trapping(int arr[],int n)
{
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);
    }

    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    
    print_array(lmax,n);
    cout<<endl;
    print_array(rmax,n);
    cout<<endl;
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        res=res+(min(rmax[i],lmax[i])-arr[i]);
    }

    return res;
}
// ----------------------------------------------------

int main()
{
    // int n=5;
    // int arr[n]={1,5,3,8,12};
    int n=5;
    int arr[n]={5,0,6,2,3};
    // int n=6;
    // int arr[n]={10,10,10,25,30,30};
    // int n=6;
    // int arr[n]={10,10,10,30,30,40};
    // int n=3;
    // int arr[n]={10,20,30};

    cout<<trapping(arr,n);
    return 0;
}