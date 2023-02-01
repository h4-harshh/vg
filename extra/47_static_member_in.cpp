#include<iostream>
using namespace std;

class player
{

    public:
    static int count;
    
    player()
    {
        count++;
    }

    ~player()
    {
        count--;
    }
};

int player :: count=0;

int main()
{
    player p1;
    cout<<player::count<<endl;

    player p2;
    cout<<player::count<<endl;

    {
        player p3;
        cout<<player::count<<endl;
    }

    cout<<player::count<<endl;
    
    return 0;
}