#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector <int> v;

    vector <int> a(4,1);
    cout<<"element of vector a: ";
    for(int i:a)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    vector <int> copy_a(a);
    cout<<"elements of copy_a vector: ";
    for(int i:copy_a)
    {
        cout<<copy_a[i]<<" ";
    }
    cout<<endl;

    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;

    cout<<"size: "<<v.size()<<endl;

    cout<<"element at index 2 is: "<<v.at(2)<<endl;
    cout<<"element at front of vector is: "<<v.front()<<endl;
    cout<<"element at last of vector is: "<<v.back()<<endl;

    cout<<"vector before pop back operation: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"vector after pop back operation: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"capacity before clear: "<<v.capacity()<<endl;
    cout<<"size before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"capacity after clear: "<<v.capacity()<<endl;
    cout<<"size after clear: "<<v.size()<<endl;


    return 0;
}