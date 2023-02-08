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
    int n=5;
    int sum=35;
    int arr[n]={20,10,5,30,10};
    priority_queue <int,vector<int>,greater<int>> p = sort(arr,n);

    
    // int sum1=0;
    // int count=0;
    // while(sum>sum1)
    // {
    //     if((sum1=sum1+p.top())<sum)
    //     {
    //         count++;
    //     }
    //     p.pop();

    // }
    int count=0;
    while(p.top()<sum)
    {
        count++;
        sum=sum-p.top();
        p.pop();
    }

    cout<<count<<endl;


    return 0;
}