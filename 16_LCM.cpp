#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int b;
    cin>>b;

    int  k=max(a,b);
    int i=a*b;
    while(k<=i)
    {
        if((k%a==0)&&(k%b==0))
        {
            cout<<k;
            break;
        }
        k++;
    }
    return 0;
}