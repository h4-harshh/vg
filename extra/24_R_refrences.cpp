#include<iostream>
using namespace std;

void fun(string &&s)
{
    s="hi"+s;
    cout<<s;
}
int main()
{
    fun("harsh");
    return 0;
}