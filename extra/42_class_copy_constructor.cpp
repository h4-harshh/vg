#include<iostream>
using namespace std;

class test
{
    private:
    int *ptr;

    public:

    test(int x)
    {
        ptr=new int(x);
    }
// ----------------------------------------------------------------------------------------------------------
// copy constructor
    test(const test &t)
    {
        int val=*(t.ptr);
        ptr=new int(val);
    }

// ----------------------------------------------------------------------------------------------------------


    void set(int x)
    {
        *ptr=x;
    }

    void print()
    {
        cout<<*ptr<<endl;
    }
};

int main()
{
    test t1(10);
    test t2(t1);

    t2.set(20);

    t1.print();
    t2.print();
    return 0;
}