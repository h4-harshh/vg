#include<iostream>
#include<map>

using namespace std;

multimap <int,string> m;


void add(int price,string name)
{
    m.insert({price,name});
}

string find(int price)
{
    cout<<"finding: "<<price<<endl;
    auto it=m.equal_range(price);
    for(auto i=it.first;i!=it.second;i++)
    {
        cout<<i->second<<" "
            <<i->first<<endl;
    }

    cout<<"closing "<<endl;
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
    add(4,"harsh1");
    add(4,"nikhil");
    add(55,"singh");
    add(36,"nitin1");
    add(36,"nitin3");
    add(36,"nitin2");
    add(98,"nitin5");

    print_sorted();

    find(5);
    find(4);

    cout<<"print greater sorted"<<endl;
    print_greater_sorted(36);

    cout<<"print smaller sorted"<<endl;
    print_smaller_sorted(36);

    return 0;
}