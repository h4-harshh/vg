#include<iostream>
using namespace std;

class base
{
    public:
// __________-----------------------------------------------------------------------------------------------------------

    // void print()
    // {
    //     cout<<"base class \n";
    // }

// __________-----------------------------------------------------------------------------------------------------------

    virtual void print()
    {
        cout<<"base class \n";
    }
};
class derived : public base{
    public:
    void print()
    {
        cout<<" derived class \n";
    }
};
// __________-----------------------------------------------------------------------------------------------------------

int main()
{
    base b;
    derived d;
    b.print();
    d.print();

    base *ptr;
    ptr=&d;
    ptr->print();

    return 0;
}