#include<iostream>
using namespace std;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// //naive solution bog o of n square
// void zeros_end(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(arr[j]!=0)
//                 {
//                     swap(arr[i],arr[j]);
//                     break;
//                 }
//             }
//         }
//     }

//     print_array(arr,n);
// }


//efficient solutionnnnnnnnnn-----------------------------------------------------------------------------------------------------
void zeros_end(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    print_array(arr,n);
}


int main()
{
    int n=7;
    int arr[n]={1,4,0,6,0,7,8};
    // int n=8;
    // int arr[n]={10,5,0,0,8,0,9,0};
    print_array(arr,n);
    cout<<endl;
    zeros_end(arr,n);
}