#include<bits/stdc++.h>
using namespace std;

class hero
{
    int health;
    public:
    char level;
    char *name;

    // public:
    hero()
    {
        name=new char[100];
    }
    hero(int health,char level,char *name)
    {
        this->health=health;
        this->level=level;
        this->name=name;
    }


    hero(hero &temp)
    {

    }

    void sethealth(int health)
    {
        this->health=health;
    }

    int  gethealth()
    {
        return health;
    }

    void setlevel(int level)
    {
        this->level=level;
    }

    void getlevel()
    {
        this->level=level;
    }

    // void setname(char *name)
    // {
    //     this->name=name;
    // }
    void setName(char name[]) {
        strcpy(this->name, name);
    }

    void print()
    {
        cout<<"Name: "<<name<<" "
            <<"health: "<<health<<" "
            <<"level: "<<level<<endl;
    }

};

int main()
{
    hero harsh;
    harsh.sethealth(80);
    harsh.setlevel('A');
    harsh.name[6]="harsh";
    harsh.setName(name);


    harsh.name[0]="i";
    harsh.print();

    hero nikhil(harsh);

    nikhil.print();

    return 0;
}