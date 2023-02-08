#include<iostream>
#include<queue>

using namespace std;

priority_queue<int,vector<int>,greater<int>> sort(int arr[],int n)
{
    priority_queue <int,vector<int>,greater<int>> pq{arr,arr+n};
    
    return pq;

}
int main()
{
    int n=8;
    int arr[n]={3,7,4,5,3,9,1,4};
    priority_queue <int,vector<int>,greater<int>> p = sort(arr,n);

    // for(int x:p)
    //     cout<<x<<" ";
    // cout<<endl;

    while(p.empty()==false)
    {
        cout<<p.top()<<" ";
        p.pop();
    }

    return 0;
}