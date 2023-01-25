#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int b;
    cin>>b;

    int  k=min(a,b);
    while(k>=1)
    {
        if((a%k==0)&&(b%k==0))
        {
            cout<<k;
            break;
        }
        k--;
    }
    return 0;
}