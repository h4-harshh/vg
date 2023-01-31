#include<iostream>
using namespace std;

class complex
{
    private:
    int real;
    int imag;

    public:

    complex(int r,int im)
    {
        real=r;
        imag=im;
    }

    void print()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main()
{
    complex c1(10,20);
    // c1.r=20;
    // c1.im=20;

    c1.print();
    return 0;
}