#include<iostream>
using namespace std;

class point
{
    int x;
    int y;

    public:

    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    point &setX(int x)
    {
        this->x=x;
        return *this;
    }

    point &setY(int y)
    {
        this->y=y;
        return *this;
    }

    void print()
    {
        cout<<x<<endl<<y<<endl;
    }
};
int main()
{
    point p1(9,9);
    p1.setX(5).setY(7);
    p1.print();
    return 0;
}