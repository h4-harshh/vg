// #include<iostream>
// #include<vector>
// using namespace std;

// // vector<int>
// void span(int arr[],int n)
// {
//     // vector <int> v;
//     for(int i=0;i<n;i++)
//     {
//         int span=0;
//         for(int j=i-1;j>=0;j--)
//         {
//             if(arr[j]>arr[i])
//             {
//                 // v.push_back(arr[j]);
//                 cout<<arr[j]<<" ";
//                 span=1;
//                 break;
//             }
//         }
//         if(span!=1)
//         {
//             cout<<"-1"<<" ";
//         }
      
//     }
// }


// int main()
// {
//     int n=7;
//     int arr[n]={15,10,18,12,4,6,28};
//     // vector <int> s=
//     span(arr,n);

//     // for(int x:s)
//     //     cout<<x<<" ";
//     // return 0;
// }

// -----------------------------------------------
// using stock span problem;


#include<iostream>
#include<stack>
using namespace std;

void previous_greater(int arr[],int n)
{
    stack <int> s;
    s.push(arr[0]);
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<arr[i])
        {
            s.pop();
        }

        int k=((s.empty())?-1:s.top());
        cout<<k<<" ";
        s.push(arr[i]);
    }
}
int main()
{
    int n=7;
    int arr[n]={15,10,18,12,4,6,28};
    previous_greater(arr,n);

    return 0;
}