#include<iostream>
using namespace std;

class test
{
    int x;

    public:

    test(int x1):x(x1)
    {
        cout<<"constructor "<<x<<endl;
    }

    ~test()
    {
        cout<<"distructor "<<x<<endl;
    }
};
int main()
{
    test t1(10);
    test t2(20);
    return 0;
}