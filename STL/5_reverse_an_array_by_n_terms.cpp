#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue <int> &q,int k)
{
    if(q.empty() ==true || k>q.size()||k<=0)
        return;

    stack <int> s;
    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }

    for(int i=0;i<k;i++)
    {
        q.push(s.top());
        s.pop();
    }

    for(int i=0;i<q.size()-k;i++)
    {
        q.push(q.front());
        q.pop();
    }

}
int main()
{
    // int arr[5]={10,20,30,40,50};
    // reverse(arr,n);

    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k=3;
    reverse(q,k);

    // for(int i=0;i<q.size();i++)
    // {
    //     cout<<q[i]<<" ";
    // }

    while(q.empty()!=true)
    {
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}