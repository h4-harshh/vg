#include<iostream>
using namespace std;

class test
{
    public:
    
    test(){
        cout<<"Default parameter\n";
    }

    test(int x)
    {
        cout<<"parameterized constructor\n";
    }
};

class Main
{
    test t;
    public:
    Main()
    {
        t=test(10);
    }
};

int main()
{
    Main m;
    return 0;
}