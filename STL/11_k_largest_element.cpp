// #include<iostream>
// #include<queue>

// using namespace std;

// priority_queue<int> sort(int arr[],int n)
// {
//     priority_queue <int> pq{arr,arr+n};
    
//     return pq;

// }
// int main()
// {
//     int n=8;
//     int k=3;
//     int arr[n]={3,7,4,5,3,9,1,4};
//     priority_queue <int> p = sort(arr,n);

//     // for(int x:p)
//     //     cout<<x<<" ";
//     // cout<<endl;

//     int i=0;
//     while(i<k)
//     {
//         cout<<p.top()<<" ";
//         p.pop();
//         i++;
//     }

//     return 0;
// }


#include<iostream>
#include<queue>
using namespace std;

priority_queue<int,vector<int>,greater<int>> k_largest(int arr[],int n,int k)
{
    priority_queue <int,vector<int>,greater<int>> pq{arr,arr+k};
    
    return pq;

}


int main()
{
    int n=7;
    int k=3;
    int arr[n]={5,15,10,20,8,25,18};

    priority_queue <int,vector<int>,greater<int>> p = k_largest(arr,n,k);

    for(int i=3;i<n;i++)
    {
        if(p.top()<arr[i])
        {
            p.pop();
            p.push(arr[i]);
        }
    }

    while((p.empty())==false)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}