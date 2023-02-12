#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool search(vector<int> v,int x)
{
    auto it=upper_bound(v.begin(),v.end(),x);
    if((it!=v.end()) && (*(it-1)==x))
    {
        return 1;
    }
    return 0;
}


int main()
{
    int n=6;
    // int arr[n]
    vector <int> v={10,20,20,20,30,40};
    int x=20;
    bool k= search(v,x);
    cout<<k<<endl;;
    return 0;
}