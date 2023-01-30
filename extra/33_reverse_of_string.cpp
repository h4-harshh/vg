#include<bits/stdc++.h>
using namespace std;

int reverse(string &str,int start,int end)
{
    if(start>=end)
    {
        return true;
    }

    if(str[start]!=str[end])
    {
        return false;
    }

    return reverse(str,start+1,end-1);
}

int main()
{
    string str;
    cin>>str;
    int k=reverse(str,0,str.length()-1);
    if(k)
    {
        cout<<"palindrome";
    }
    else{
        cout<<" not palindrome";
    }
    return 0;
}