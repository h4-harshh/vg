#include<iostream>
using namespace std;

void next_greater(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                count=1;
                break;
            }
        }
        if(count!=1)
        {
            cout<<"-1"<<" ";
        }
    }
}


int main()
{
    int n=7;
    int arr[7]={5,2,7,99,3,4,33};
    next_greater(arr,n);
    return 0;
}