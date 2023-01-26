#include<iostream>
using namespace std;


void fun(int &n)
{
    n=50;
}

int main()
{
    int n=30;
    // cin>>n;

    fun(n);

    cout<<n;
    return 0;
}