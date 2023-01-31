#include<iostream>
using namespace std;

class point
{
    private:
    int x;
    int y;

    public:
    point()
    {
        x=0;
        y=0;
    }
    point(int a,int b)
    {
        x=a;
        y=b;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    point p1,p2(10,20);
    p1.print();
    p2.print();

    point *ptr=new point(11,33);
    ptr->print();
    return 0;
}