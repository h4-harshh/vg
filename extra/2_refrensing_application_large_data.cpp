#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{10,20,30,40,50};

    for(const auto &x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    for(auto &x:v)
        x=x+5;

    for(auto &x:v)
        cout<<x<<" ";

    cout<<endl;

  
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}