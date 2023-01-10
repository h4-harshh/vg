//given string is palindrome or not using recursion
#include<iostream>
using namespace std;

bool isPalindrome(string str,int start ,int end)
{
    if(start>=end)
    {
        return true;
    }

    return (str[start]==str[end]) && isPalindrome(str,start+1,end-1);
}


int main()
{
    string str;
    cin>>str;
    int start=0,end=str.length()-1;
    bool l=isPalindrome(str,start,end);
    if(l==1)cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}
