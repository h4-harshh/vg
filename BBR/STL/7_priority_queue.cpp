#include<iostream>
#include<queue>

using namespace std;
int main()
{
    //maxi
    priority_queue <int> maxi;

    //mini
    priority_queue <int,vector<int> ,greater<int> > mini;

    mini.push(3);
    mini.push(0);
    mini.push(4);
    mini.push(7);
    mini.push(5);

    int n=mini.size();
    for(int i=0;i<n;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }

    cout<<endl;
    
    maxi.push(3);
    maxi.push(0);
    maxi.push(4);
    maxi.push(7);
    maxi.push(5);

    int m=maxi.size();
    for(int i=0;i<m;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }


    
    return 0;
}