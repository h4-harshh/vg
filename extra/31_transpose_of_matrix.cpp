#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m=3,n=2;
    vector <vector <int>> arr1(m, vector <int> (n,0));
    vector <vector <int>> arr2(m, vector <int> (n,0));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           int t;
           cin>>t;
           arr1[i][j]=t;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr2[i][j]=arr1[j][i];
        }
    }
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
    }
   
    return 0;
}