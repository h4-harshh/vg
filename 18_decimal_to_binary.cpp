#include<bits/stdc++.h>
using namespace std;

int decimaltobinary(int n)
{
    if(n==0)
    {
        return 0;
    }
    int k=0;
    int i=0;
    while(n>0)
    {
        int val=n%10;
        k=k+(val*pow(2,i));
        i++;
        n=n/10;
    }

    cout<<k;
}

int main()
{
    int n;
    cin>>n;

    decimaltobinary(n);

    while(n>0)
    {
        
    }
    return 0;
}