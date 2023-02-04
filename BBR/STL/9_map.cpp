#include<bits/stdc++.h>
#include<map>

using namespace std;
int main()
{
    map <int,string> m;

    m[1]="harsh";
    m[3]="pal";
    m[2]="kumar";
    m[18]="luhsana";

 
    cout<<"printing before erase: "<<endl;
    for(auto x:m)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;

    cout<<"checkin for 18 is present: "<<boolalpha<<m.count(18)<<endl;

    m.erase(3);
    cout<<"printing after erase: "<<endl;
    for(auto x:m)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;

    auto it=m.find(2);

    for(auto i=it;i!=m.end();i++)
        cout<<(*i).first<<" "<<(*i).second<<endl;
    cout<<endl;
    
    return 0;
}