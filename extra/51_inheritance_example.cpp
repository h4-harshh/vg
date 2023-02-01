#include<iostream>
using namespace std;

class base
{
    protected:
    int x;

    public:
    
    base(int a):x(a)
    {
        cout<<"base class\n";
    }

};

class derived : public base{
   
    private:
    int y;

    public:
    
    derived(int a,int b):base(a),y(b)
    {
        cout<<"derived class\n";
    }

    void print()
    {
        cout<<"x="<<x<<" "<<"y="<<y<<endl;
    }
};


int main()
{
    derived d(5,4);
    d.print();
    return 0;
}