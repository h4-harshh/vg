#include<iostream>
using namespace std;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void rotate_one(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    print_array(arr,n);
}


int main()
{
    int n=7;
    int arr[n]={1,4,2,6,4,7,8};
    print_array(arr,n);
    cout<<endl;
    rotate_one(arr,n);
}