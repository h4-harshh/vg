#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m=2,n=2;
    vector <vector <int>> arr1(m, vector <int> (n,0));
    vector <vector <int>> arr2(m, vector <int> (n,0));
    vector <vector <int>> ans(m, vector <int> (n,0));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           int t;
           cin>>t;
           arr1[i][j]=t;
        }
        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int t;
           cin>>t;
           arr2[i][j]=t;
        }
    }
   
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[i][j]=0;
            for(int k=0;i<n;k++)
            {
                ans[i][j]=ans[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }
   
    return 0;
}