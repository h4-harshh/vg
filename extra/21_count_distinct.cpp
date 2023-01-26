#include<iostream>
using namespace std;

int count_distinct(int arr[],int n)
{
    int k=n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                k--;
                break;
            }
        }
    }
    
    return k;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k=count_distinct(arr,n);

    cout<<k<<endl;
    return 0;
}