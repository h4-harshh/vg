#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=11;
    string str="";
    while(n>=1)
    {
        str=str+to_string(n%2);
        n=n/2;
    }
    // cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}