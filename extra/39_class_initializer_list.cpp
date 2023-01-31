#include<iostream>
using namespace std;

class point
{
    int x;
    int y;

    public:

    point():x(0),y(0)
    {

    }

    point(int a,int b):x(a),y(b)
    {

    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    point p1;
    // p1.a=10;
    // p1.b=20;

    point p2(55,33);

    p1.print();
    p2.print();

    point *ptr=new point(7,9);
    ptr->print();

    return 0;
}