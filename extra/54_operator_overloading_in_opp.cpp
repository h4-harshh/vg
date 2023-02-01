#include<iostream>
using namespace std;

class complex
{
    int real;
    int img;

    public:

    complex(int r=0,int i=0):real(r),img(i)
    {

    }

    complex operator+(complex const &obj)
    {
        complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }

    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};



int main()
{
    complex c1(10,45),c2(10,55);
    complex c3;
    c3=c1+c2;

    c3.print();
    return 0;
}