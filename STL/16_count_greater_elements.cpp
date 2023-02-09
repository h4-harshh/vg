#include<iostream>
#include<map>
using namespace std;



map<int ,int> m;
void count_greater(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    int comm_freq=0;
    for(auto it=m.rbegin();it!=m.rend();it++)
    {
        int freq=it->second;
        it->second=comm_freq;
        comm_freq=comm_freq+freq;
    }
    // print();
}

void print()
{
    for(auto it=m.begin();it!=m.end();it++)
    {
        // cout<<it->first<<" "
        cout<<it->second<<endl;
    }
}

int main()
{
    int n=6;
    int arr[n]={10,100,200,30,120,120};

    count_greater(arr,n);
    print();
    return 0;
}