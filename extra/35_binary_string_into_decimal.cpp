#include<bits/stdc++.h>
using namespace std;

void binary_to_decimal(string str,int start,int end)
{
    int n=0;
    for(int i=end;i>=0;i--)
    {
        n=n+((str[i]-'0')*pow(2,(end-i)));
    }
    cout<<n<<endl;

}

int main()
{
    string str;
    cin>>str;
    binary_to_decimal(str,0,str.length()-1);
    return 0;
}