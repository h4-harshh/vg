#include<iostream>
using namespace std;

class point
{
    int x;
    int y;

    public:


// ---------------------------------------------------------------------------------------------------------------------
    // point(int x1,int y1)
    // {
    //     x=x1;
    //     y=y1;
    // }
// ---------------------------------------------------------------------------------------------------------------------
 point(int x,int y)
    {
        this->x=x;
        this->y=y;
        
    }
// ---------------------------------------------------------------------------------------------------------------------


    void print()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl;
    }
};
int main()
{
    point p1(10,29),p2(3,5);
    p1.print();
    p2.print();
    return 0;
}