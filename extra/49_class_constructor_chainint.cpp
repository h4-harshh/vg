#include<iostream>
using namespace std;

class employee
{
    string id,name;
    int years;

    public:

    employee()
    {
        id="";
        name="";
        years=0;
    }

    employee(string id):id(id)
    {

    }

    employee(string id,string name):employee(id)
    {
        this->name=name;
    }

    employee(string id,string name,int years):employee(id,name)
    {
        this->years=years;
    }

    void get_details()
    {
        cout<<"Employee: "<<id <<" "<<name<<" "<<years<<endl;
    }
};


int main()
{
    employee harsh("hk083","harsh",5);
    employee nikhil("hk888");
    harsh.get_details();
    nikhil.get_details();
    return 0;
}