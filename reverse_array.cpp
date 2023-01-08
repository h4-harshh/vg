// reverse of an array
//NAIVE SOLUTION
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n);


// void reverse(int arr[],int n)
// {
//     int temp;
//     for(int i=0;i<n/2;i++)
//     {
//         temp=arr[i];
//         arr[i]=arr[n-1-i];
//         arr[n-i-1]=temp;
//     }
//     print_array(arr,n);    
// }

void reverse_(int arr[],int n)
{
    int low=0 ,high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    print_array(arr,n);    
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
    // reverse(arr,n);
    reverse_(arr,n);
}