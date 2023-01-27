#include<iostream>
using namespace std;
int main()
{
    int n=20;
    
    int *ptr;

    ptr=&n;

    cout<<*ptr<<endl;
    
    return 0;
}