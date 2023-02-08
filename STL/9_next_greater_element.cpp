// #include<iostream>
// using namespace std;

// void next_greater(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int count=0;
//         for(int j=i;j<n;j++)
//         {
//             if(arr[j]>arr[i])
//             {
//                 cout<<arr[j]<<" ";
//                 count=1;
//                 break;
//             }
//         }
//         if(count!=1)
//         {
//             cout<<"-1"<<" ";
//         }
//     }
// }


// int main()
// {
//     int n=7;
//     int arr[7]={5,2,7,99,3,4,33};
//     next_greater(arr,n);
//     return 0;
// }

#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> next_greater(int arr[],int n)
{
    stack <int> s;
    vector <int> v;
    s.push(arr[n-1]);
    // cout<<"-1"<<" ";
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()<arr[i])
        {
            s.pop();
        }

        int k=((s.empty())?-1:s.top());
        // cout<<k<<" ";
        v.push_back(k);
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
    int n=8;
    int arr[n]={5,15,10,8,6,12,9,18};
    vector <int> x=next_greater(arr,n);

    for(int h:x)
        cout<<h<<" ";
    cout<<"-1"<<endl;


    return 0;
}