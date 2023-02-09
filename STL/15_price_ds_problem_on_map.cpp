#include<iostream>
#include<map>

using namespace std;

map <int,string> m;


void add(int price,string name)
{
    m[price]=name;
}

string find(int price)
{
    auto it=m.find(price);
    if(it==m.end())
    {
        return "";
    }
    else
    return it->second;
}

void print_sorted()
{
    for(auto x:m)
    {
        cout<<x.second<<" "
            <<x.first<<endl;
    }

}

void print_greater_sorted(int price)
{
    auto it=m.upper_bound(price);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<i->second<<" "<<i->first<<endl;
    }

}

void print_smaller_sorted(int price)
{
    auto it=m.lower_bound(price);
    for(auto i=m.begin();i!=it;i++)
    {
        cout<<i->second<<" "<<i->first<<endl;
    }

}

int main()
{
    add(5,"harsh5");
    add(4,"harsh4");
    add(1,"harsh1");
    add(7,"nikhil");
    add(55,"singh");
    add(32,"nitin1");
    add(36,"nitin3");
    add(23,"nitin2");
    add(98,"nitin5");

    print_sorted();

    cout<<find(5)<<endl;
    cout<<find(13)<<endl;

    print_greater_sorted(7);

    print_smaller_sorted(32);

    return 0;
}