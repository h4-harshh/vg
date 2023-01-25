#include<iostream>
using namespace std;

int nextprime(int n)
{
    // // int i=2;
    // int count=0;
    // while(1)
    // {
    //     for(int i=2;i<n;i++)
    //     {
    //         if(n%i==0)
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     n++;
    // }
    int count=0;
    for(int i=2;i<n+1;i++)
    {
        if((n+1)%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        cout<<n;
    return n;
    }
    return nextprime(n++);
    
        
}
int main()
{
    int n;
    cin>>n;

    int k=nextprime(n);
    cout<<k<<endl;
    return 0;
}