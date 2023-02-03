#include<iostream>
#include<deque>

using namespace std;


int main()
{
    deque <int> d;

    d.push_back(1);

    d.push_front(2);

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"element at index 1 is: "<<d.at(1)<<endl;

    cout<<"element at front or first element is: "<<d.front()<<endl;
    cout<<"element at back or last element is: "<<d.back()<<endl;

    cout<<"deque is empty: "<<boolalpha<<d.empty()<<endl;

    cout<<"deque before erasing: "<<endl;
    for(int x:d)
        cout<<x<<" ";
    cout<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<"deque after erasing: "<<endl;
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    // cout<<"iterator start from: "<<d.begin();
    // cout<<"iterator end at: "<<d.end();

    for(auto it=d.begin();it!=d.end();it++)
        cout<<*it<<" ";

    return 0;
}