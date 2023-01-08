//NAIVE SOLUTION
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n);
void reverse(int arr[],int n,int k);
//approach 1
// int rotate(int arr[],int n,int k)
// {
    // int temp[k];
//     for(int i=0;i<k;i++)
//     {
//         temp[i]=arr[i];
//     }
//     for(int i=k;i<n;i++)
//     {
//         arr[i-k]=arr[i];
//     }
//     for(int i=0;i<k;i++)
//     {
//         arr[n-k+i]=temp[i];
//     }
//     print_array(arr,n);
// }

//aproach 2nd
void rotate(int arr[],int n,int k)
{
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    print_array(arr,n);
}

void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
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