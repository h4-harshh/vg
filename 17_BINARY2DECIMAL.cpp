#include<iostream>
using namespace std;

void binarytodecimal(int n)
{
    if(n==0)
    {
        return;
    }
    binarytodecimal(n/2);
    cout<<n%2;
}

int main()
{
    int n;
    cin>>n;

    binarytodecimal(n);

    while(n>0)
    {
        
    }
    return 0;
}