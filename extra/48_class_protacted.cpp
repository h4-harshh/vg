#include<iostream>
using namespace std;

class parent
{
    protected:

    int id;
};

class child : private parent
{
    private:
    void setid(int id)
    {
        this->id=id;
    }
    public:
    void set(int id)
    {
        this->id=id;
    }
    void display_id()
    {
        cout<<"the id is "<<this->id<<endl;
    }
};

int main()
{
    child h;
    h.set(50);

    h.display_id();
    return 0;
}