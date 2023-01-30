#include<iostream>
using namespace std;


// void print(string str1,int start,int end);


void reverse(string str,int start,int end)
{
    // string str1;
    for(int i=end;i>=0;i--)
    {
        cout<<str[i];
    }
   
    // int first=0;
    // int last=str1.length()-1;
    // print(str1,first,last);
}

// void print(string str1,int start,int end)
// {
//     for(int i=start;i<=end;i++)
//     {
//         cout<<str1[i];
//     }
// }

int main()
{
    string str;
    cin>>str;
    reverse(str,0,str.length()-1);
    return 0;
}