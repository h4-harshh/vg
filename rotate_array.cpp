//rotate array by n elemtets
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n);

int rotate(int arr[],int n,int k)
{
    // int largest=0;
    for(int i=0;i<k;i++)
    {
        int temp=arr[0];
        for(int j=1;j<n;j++)
        {
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp;
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
    int k;
    cout<<"enter the no. by elements to be rotated by"<<endl;
    cin>>k;
    rotate(arr,n,k);
}