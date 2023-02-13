#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct point
{
    int x,y;
};

bool mycmp(point q1,point q2)
{
    return (q1.x<q2.x);
}
int main()
{
    int n=3;
    point p[n]={{55,3},{1,99},{88,77}};

    sort(p,p+n,mycmp);

    for(auto i:p)
        cout<<i.x<<" "<<i.y<<endl;
}