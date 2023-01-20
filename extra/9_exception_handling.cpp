#include<iostream>
using namespace std;

int average(int arr[],int n)
{
    if(n==0)
    {
        throw string("array size is zero");
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    return sum/n;
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

   try
   {
        int res=average(arr,n);
        cout<<res<<endl;
   }

   catch(string &e)
   {
        cout<<e<<endl;
   }

   cout<<endl;
//    cout<<"bye"<<end;
    
    
    return 0;
}