#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);

    cout<<"finding 7: " <<binary_search(v.begin(),v.end(),7)<<endl;


    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;


    int a=3;
    int b=9;

    cout<<"maximum is: "<<max(3,9)<<endl;
    cout<<"minimum is: "<<min(3,9)<<endl;

    swap(a,b);
    cout<<"the value of a is: "<<a<<endl;

    string k="harsh";

    reverse(k.begin(),k.end());
    cout<<"the reverse of harsh is: "<<k<<endl;


    cout<<"rotating vector: "<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;

    cout<<"sorting vector: "<<endl;

    sort(v.begin(),v.end());
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}