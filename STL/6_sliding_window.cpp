// #include<iostream>
// #include<deque>
// using namespace std;

// void print_max(int arr[],int n,int k)
// {
//     deque <int > q;
    
//     for(int i=0;i<k;i++)
//     {
//         if(!q.empty()&& arr[i]>=q.back())
//            { q.pop_back();}
//         q.push_back();
//     }

//     for(int i=k;i<n;i++)
//     {
//         cout<<arr[q.front()];
//         while(!q.empty() && q.front()<=i-k)
//             q.pop_front();

//         while(!q.empty() && arr[i]>=arr[q.back()])
//          {   q.pop_back();
         
//          }
//         q.push_back();
//     }

// }

// int main()
// {
//     int n=5;
//     int arr[n]={20,40,30,10,60};
//     int k=3;

//     print_max(arr,n,k);
//     return 0;
// }