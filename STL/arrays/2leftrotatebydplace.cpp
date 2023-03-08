#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//first method
// void rotate_one(int arr[],int n,int d)
// {
//     int arr1[d];
//     for(int i=0;i<d;i++)
//     {
//         arr1[i]=arr[i];
//     }

//     for(int i=d;i<n;i++)
//     {
//         arr[i-d]=arr[i];
//     }

//     for(int i=0;i<d;i++)
//     {
//         arr[n+i-d]=arr1[i];
//     }
//     print_array(arr,n);
// }


// second method
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void rotate_d(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    print_array(arr,n);
}



int main()
{
    int n=7;
    int d=4;
    int arr[n]={1,4,2,6,4,7,8};
    // int n=4;
    // int d=3;
    // int arr[n]={10,5,30,15};
    print_array(arr,n);
    cout<<endl;  
    rotate_d(arr,n,d);
}