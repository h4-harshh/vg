// without initializer list

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
    Main():t(10)
    {
        // t=test(10); ----wuth initializer list
    }
};

int main()
{
    Main m;
    return 0;
}