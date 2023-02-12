#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct point
{
    int x;
    int y;

    point(int i,int j)
    {
        x=i;
        y=j;
    }
};

bool mycmp(point p1,point p2)
{
    return (p1.x<p2.x);
}


int main()
{
    vector <point> v={{5,4},{2,300},{90,10}};
    auto it=max_element(v.begin(),v.end(),mycmp);
    cout<<(*it).x<<" "<<(*it).y<<endl;


         it=min_element(v.begin(),v.end(),mycmp);
    cout<<it->x<<" "<<it->y<<endl;
    return 0;
}