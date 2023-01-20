#include<iostream>
using namespace std;

int *harsh()
{
    // int a=10;
    // int *ptr=&a;
    // return ptr;

    int *ptr=new int;
    *ptr=20;
    return ptr;
}
int main()
{
    int x,y;
    cout<<*harsh();
    return 0;
}