#include<bits/stdc++.h>
using namespace std;

class myhash
{
    int bucket;
    list <int> *table;

    public:
    
    myhash(int b)
    {
        bucket=b;
        table=new list<int>[b];
    }

    void insert(int key)
    {
        int i=key%bucket;
        table[i].push_back(key);
    }

    void remove(int key)
    {
        int i=key%bucket;
        table[i].pop_back();
    }

    int search(int key)
    {
        int i=key%bucket;

        if(table[i]==key)
        {
            return 1;
        }

        
            return 0;
        
    }



};


int main()
{
    myhash harsh(7);
    
    return 0;
}