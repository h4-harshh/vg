#include<iostream>
using namespace std;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


//naive solution_______________________________________________________________________________________________---
// void leader(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int flag=0;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]>=arr[i])
//             {
//                 flag=1;
//                 break;
//             }
           
//         }
//         if(flag==0)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
// }
//----------------------------------------------------------------------------------------------------------------

//efficient solution---------------------------------------------------------------------------------------------

void leader(int arr[],int n)
{
        int curr_ldr=arr[n-1];
        cout<<curr_ldr<<" ";

        for(int i=n-2;i>=0;i--)
        {
            if(curr_ldr<arr[i])
            {
                curr_ldr=arr[i];
                cout<<curr_ldr<<" ";
            }
        }
}


int main()
{
    int n=7;
    int arr[n]={1,4,0,6,0,3,2};
    // int n=8;
    // int arr[n]={10,5,0,0,8,0,9,0};
    print_array(arr,n);
    cout<<endl;
    leader(arr,n);
    return 0;
}