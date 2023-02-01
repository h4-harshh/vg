#include<iostream>
using namespace std;

class A
{
    public:
    
    A()
    {
        cout<<"A class constructor is called"<<endl;
    }
};

class B : public A
{
    public:

    B()
    {
        cout<<"B class constructor is called"<<endl;
    }
};

class C : public A
{
    public:
   
    C()
    {      
        cout<<"C class constructor is called"<<endl;
    }
};

class D : public B , public C
{
    public:de
    D()
    {
        cout<<" D class constructor is called"<<endl;
    }
};


int main()
{
    D h;

    return 0;
}