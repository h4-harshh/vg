#include <iostream>
using namespace std;

void getAddMul(int x,int y,int *m,int *a)
{
    *m=x*y;
    *a=x+y;
}
int main() {
    int x=10,y=20,a,m;
    getAddMul(x,y,&m,&a);
    cout<<"mul ="<<m<<endl;
    cout<<"addition= "<<a<<endl;
    return 0;
}