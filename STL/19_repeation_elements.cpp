#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void printing_unique_elements(int arr[],int n)
{
    unordered_set <int> u;

    for(int i=0;i<n;i++)
    {
        if(u.find(arr[i])==u.end())
        {
            u.insert(arr[i]);
        }
        else{
            cout<<arr[i]<<" ";

        }

    }
    cout<<endl;

   
}

int main()
{
    int n=6;
    int arr[n]={100,100,200,30,120,120};

    printing_unique_elements(arr,n);
    return 0;
}