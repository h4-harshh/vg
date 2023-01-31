#include<iostream>
using namespace std;

class test
{
    int x;

    public:

    test()
    {
        cout<<"constructor called"<<endl;
    }

    ~test()
    {
        cout<<"distructor called"<<endl;
    }

};


int main()
{
    {
    test t1;
    }

    test t2;
    return 0;
}