#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int n=7;
    int arr[n]={6,5,3,7,66,33,99};

    sort(arr,arr+n);

    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl;

    // sort(arr,arr+n,greater<int>);

    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl;
}