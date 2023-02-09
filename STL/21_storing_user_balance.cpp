#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

vector <pair<int,int>> v;

// void set_data(int id,int bal)
// {
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i].first==id)
//         {
//             v[id].second==bal;
//         }
//         else{
//             v.push_back({id,bal});
//         }
//     }
// }


// void get_data(int id)
// {
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i].first==id)
//         cout<<v[i].second<<endl;
//     }
// }

unordered_map <int,int> u;

void set_data(int id,int bal)
{
    u[id]=bal;
}

void get_data()
{
    for(auto x:u)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}


int main()
{
    set_data(1,100);
    set_data(2,200);
    set_data(3,300);
    set_data(4,400);
    set_data(1,1000);
    set_data(3,3000);
    get_data();
    return 0;
}