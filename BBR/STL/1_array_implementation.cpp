#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a;
    a={1,2,3,4,5};

    int n=a.size();

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"the element at index 2 is: "<<a.at(2)<<endl;
    cout<<"the element at index 3 is: "<<a.at(3)<<endl;

    cout<<"the element at front of array i.e. first element is: "<<a.front()<<endl;
    cout<<"the element at back of array i.e. last element is: "<<a.back()<<endl;

    cout<<"is the array is empty "<<boolalpha<<a.empty()<<endl;
    return 0;
}