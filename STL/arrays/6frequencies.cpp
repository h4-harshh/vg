//frequencies in a sorted array
#include<iostream>
using namespace std;

// void freq_element(int arr[],int n)
// {
//     int count=1;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i-1]==arr[i])
//         {
//             count++;
//         }
        
//         else if(arr[i-1]!=arr[i]&&i<n)
//         {
//             cout<<arr[i-1]<<" "<<count<<endl;
//             count=1;
//         }
//         if(i==n-1)
//         {
//             cout<<arr[n-1]<<" "<<count<<endl;
//         }
        
//     }
//     if(n==1)
//     {
//         cout<<arr[n-1]<<" "<<count<<endl;
//     }
// }


void freq_element(int arr[],int n)
{
    int freq=1,i=1;

    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }

        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
    {
        cout<<arr[i-1]<<" "<<"1"<<endl;
    }
}

int main()
{
     int n=3;
    int arr[n]={10,20,30};
    // int n=4;
    // int arr[n]={10,10,10,10};
    // int n=6;
    // int arr[n]={10,10,10,25,30,30};
    // int n=6;
    // int arr[n]={10,10,10,30,30,40};
    // int n=1;
    // int arr[n]={10};

    freq_element(arr,n);

    return 0;
}