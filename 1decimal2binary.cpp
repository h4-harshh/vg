//conversion decimal to binary
#include<iostream>
using namespace std;

void bits(int n)
{
    if(n==0)
    {
        return;
    }
    bits(n/2);
    cout<<n%2<<" ";
}


int main()
{
    int n;
    cin>>n;
    bits(n);
    return 0;
}