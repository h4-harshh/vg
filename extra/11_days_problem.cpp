#include<iostream>
using namespace std;

int fun(int n,int d)
{
    int k=n%7;
    int a=d-k;
    if(a<0)
    {
        return (7-k);
    }
    return k;
}
int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    int ans=fun(n,d);
    cout<<ans<<endl;
    return 0;
}