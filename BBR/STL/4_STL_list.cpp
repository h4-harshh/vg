#include<bits/stdc++.h>
#include<list>

using namespace std;
int main()
{
    list <int> l;

    l.push_back(1);
    l.push_front(2);

    for(int x:l)
        cout<<x<<" ";
    cout<<endl;

    cout<<"element at front: "<<l.front()<<endl;
    cout<<"element at back: "<<l.back()<<endl;

    cout<<"list is empty: "<<boolalpha<<l.empty()<<endl;

    cout<<"list before erase: ";
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;

    list <int>:: iterator itr1,itr2;


    itr1=l.begin();
    l.erase(itr1);
    cout<<"list after erase: ";
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;

    list <int> copy_l(l);
    cout<<"printing copied list l: ";
    for(int x:copy_l)
        cout<<x<<" ";
    cout<<endl;

    list <int> new1(5,22);
    cout<<"printing list new: ";
    for(int x:new1)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}