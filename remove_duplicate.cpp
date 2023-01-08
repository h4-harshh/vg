// removing duplicate elements from an array
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n);

// //  NAIVE APPROACH TO REMOVE DUPLICATE ELEMETN
// int remove_duplicate(int arr[],int n)
// {
//     int temp[n];
//     temp[0]=arr[0];
//     int res=1;
//     for(int i=1;i<n;i++)
//     {
//        if(arr[i]!=temp[res-1])
//        {
//             temp[res]=arr[i];
//             res++;
//        }
//     }
//     for(int i=0;i<res;i++)
//     {
//         arr[i]=temp[i];
//     }
//     print_array(arr,res);
//     return res;
// }


// EFFICIENT APPROACH TO REMOVE DUPLICATE ELEMENT
int remove_duplicate(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
       if(arr[i]!=arr[res-1])
       {
            arr[res]=arr[i];
            res++;
       }
    }
    print_array(arr,res);
    return res;
}


void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    int k=remove_duplicate(arr,n);
    cout<<k<<endl;
}