// #include<iostream>
// using namespace std;

// union point
// {
//     int x;
//     int y;
// };

// int main()
// {
//     point p;
//     p.x=10;
//     cout<<p.x<<" "<<p.y<<endl;
//     p.y=90;
//     cout<<p.x<<" "<<p.y<<endl;
//     return 0;
// }


// ***************************************************************************************************************
// #include<iostream>
// using namespace std;

// union point
// {
//     int x;
//     float y;
// };


// int main()
// {
//     point p;
//     p.y=1.1;
//     cout<<p.x<<endl;
//     return 0;
// }



// ********************************************************************************************************************************

#include<iostream>
using namespace std;

union point
{
    int x;
    char arr[4];
};


int main()
{
    point p;
    p.x=512;
    // cout<<(int)+.arr[0]<<endl;

    cout<<p.x<<endl;

    for(int i=0;i<4;i++)
    {
        cin>>p.arr[i];
    }

    for(int i=0;i<4;i++)
    {
        cout<<p.arr[i]<<" ";
    }
    return 0;
}
