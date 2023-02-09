#include<bits/stdc++.h>
#include<set>
#include<algorithm>


using namespace std;

set <int> s;
void insert(int x)
{
    s.insert(x);
}

void delete1(int x)
{
    s.erase(x);
}


bool search(int x)
{
    
//     if(s.find(x)!=s.end())
//         return true;
//     return false;
    return (s.find(x)!=s.end());

}

int getceiling(int x)
{
    auto it=s.lower_bound(x);

    if(it==s.end())
        return INT_MAX;
    else{

    return (*it);
    }

   
}

int getfloor(int x)
{
    auto it=s.lower_bound(x);

    if(it==s.begin())
    {
        if(*it==x)
        {
            return *it;
        }
        else
        {
            return INT_MIN;
        }
    }
    else
    {
        if(it!=s.end() && *it==x)
        {
            return *it;
        }
        it--;
        return *it;
    }
}


int main()
{

    insert(10);
    insert(20);
    insert(15);
    insert(5);
    insert(25);
    cout<<search(15)<<endl;
    delete1(15);
    cout<<search(15)<<endl;
    cout<<getfloor(6)<<endl
         << getfloor(5)<<endl
          <<  getceiling(6)<<endl
          <<  getceiling(25)<<endl
            <<getceiling(100)<<endl
            <<getfloor(1)<<endl;

    // cout<<getceiling(6);
   

    return 0;
}