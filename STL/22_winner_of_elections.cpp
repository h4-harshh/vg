#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

string winner(string arr[],int n)
{
    unordered_map <string,int> u;
    for(int i=0;i<n;i++)
    {
        u[arr[i]]++;
    }

    for(auto z:u)
    {
        cout<<z.first<<" "<<z.second<<endl;
    }
    int max_freq=0;
    string winner;
    for(auto x:u)
    {
        if(x.second>max_freq)
        {
            max_freq=x.second;
            winner=x.first;
        }
        else
        {
            if(x.second==max_freq && x.first<winner)
            {
                winner=x.first;
            }
        }
        

    }
        return winner;

}


int main()
{
    int n=15;
        string arr[n]={"harsh","nikhil","harsh","nikhil","harsh","harsh","harsh","harsh","harsh","nitin","nitin","nitin","nitin","nitin","harsh"};

    // stirng k=winner(arr,n);

    cout<<"the winner of the election is: "<<winner(arr,n)<<endl;
    return 0;
}