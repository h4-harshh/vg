#include<iostream>
using namespace std;

class test
{
    int *ptr;

    public:
    test(int *p=NULL)
    {
        ptr=p;
    }

    ~test()
    {
        delete ptr;
    }

    int &operator *()
    {
        return *ptr;
    }
};


int main()
{
    test teSt(new int());
    *teSt=20;
    cout<<*teSt;
    return 0;
}