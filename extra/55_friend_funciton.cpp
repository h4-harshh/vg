#include<iostream>
using namespace std;

class employee;

class printer
{
    public:
    
    void print(const employee &e);
};

class employee
{
    int id;
    string name;

    public:

    friend void printer::print(const employee &e);
    employee(int i,string n):id(i),name(n)
    {

    }

};
    void printer :: print(const employee &e)
    {
        cout<<e.id<<" "<<e.name<<endl;
    }


int main()
{
    printer p;
    employee e(123,"harsh");

    p.print(e);
    return 0;
}