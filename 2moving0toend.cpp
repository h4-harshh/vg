//NAIVE SOLUTION
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int n);



// void leftrotate(int arr[],int n,int k);
// *********************************************************************************
// my approach
// void movingzero(int arr[],int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     if(arr[i]==0)
//     {
//         int k=i+1;
//         leftrotate(arr,n,k);
//         arr[n-1]=0;
//     }
    
//   }
//   print_array(arr,n);
// }

// void leftrotate(int arr[],int n,int k)
// {
//     for(int i=k;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
// }
// // *********************************************************************************



// *********************************************************************************
// my 
void movingzero(int arr[],int n)
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

void leftrotate(int arr[],int n,int k)
{
    for(int i=k;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
}
// *********************************************************************************

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
     movingzero(arr,n);
}