#include<bits/stdc++.h>
using namespace std;

void pat_find_at_index(string str,string pat)
{
    int found=str.find(pat);
    
    while(found!=string::npos)
    {

        cout<<"Pattern found at "<<found<<endl;
        found=str.find(pat,found+1);
    }
}
int main()
{
    string str,pat;
    cin>>str>>pat;
    pat_find_at_index(str,pat);
    return 0;
}