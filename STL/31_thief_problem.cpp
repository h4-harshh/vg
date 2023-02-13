#include<iostream>
#include<algorithm>
using namespace std;

int max(int arr[],int n,int k)
{
    sort(arr,arr+n);

    // sort(arr,arr+n,greater<int>());
    int sum=0;
    for(int i=n-1;i>=n-k;i--)
    {
        sum=sum+arr[i];
    }

    return sum;
}



int main()
{
    int n=6;
    int k=3;
    int arr[6]={3,7,2,5,12,31};

    cout<<max(arr,n,k);



    return 0;
}