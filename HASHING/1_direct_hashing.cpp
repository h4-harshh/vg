#include<iostream>
using namespace std;

class direct
{
    int table[6]={0};

    public:

    void insert(int i)
    {
        table[i]=1;
    }

    int search(int i)
    {
        return table[i];
    }

    void remove(int i)
    {
        table[i]=0;
    }


    void print()
    {
        for(int i=0;i<6;i++)
        {
            cout<<table[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    direct d;
    d.insert(1);
    d.print();

    d.insert(3);
    d.print();

    d.insert(5);
    d.print();

    cout<<d.search(3)<<endl;
    

    d.remove(3);
    d.print();

    cout<<d.search(3)<<endl;    
   

   cout<<"final: ";
   d.print();
    return 0;
}