#include<iostream>
#include<set>

using namespace std;
int main()
{
    set <int> s;

    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(5);
    s.insert(6);

    set <int> :: iterator it;
    it=s.end();

    for(int it : s)
        cout<<it<<" ";
    cout<<endl;

    set <int> :: iterator itr;
    itr=s.begin();
    s.erase(itr);
    cout<<"set after erasing: ";
    for(int itr : s)
        cout<<itr<<" ";
    cout<<endl;


    set<int> :: iterator it1;
    auto pos=s.find(5);
    // cout<<"the index of 3 is-> "<<s.find(5)<<endl;

    for(it=pos;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    // set <int> :: iterator itr1;
    // itr1=s.begin();
    // s.erase(itr1);
    // cout<<"set after erasing: ";
    // for(int itr1 : s)
    //     cout<<itr<<" ";
    // cout<<endl;
    return 0;
}