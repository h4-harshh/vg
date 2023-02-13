#include<iostream>
#include<algorithm>
using namespace std;


const int c=5;
const int r=3;

int matmid(int arr[r][c])
{
    int min=arr[0][0],max=arr[0][c-1];
    for(int i=0;i<r;i++)
    {
        if(min>arr[i][0])
        {
            min=arr[i][0];
        }
        if(max<arr[i][c-1])
        {
            max=arr[i][c-1];
        }
    }
    cout<<max<<" "<<min<<" ";
}
int main()
{
    // int r=3;
    
    // int arr1[n*m];
    // int k=0;
    int arr[r][c]={{2,10,20,30,40},{1,2,3,4,6},{11,13,15,17,19}};
    matmid(arr);
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         arr1[k]=arr[i][j];
    //         k++;
    //     }
    // }

    // sort(arr1,arr1+n*m);

    // // for(int s=0;s<m*n;s++)
    // //     {
    // //         cout<<arr1[s]<<" ";
    // //     }

    // if((n*m)%2==0)
    // {
    //     cout<<arr1[(n*m)/2-1]<<" "<<arr1[((n*m)/2)]<<" ";
    // }
    // else
    // {
    //     cout<<arr1[((n*m)/2)]<<" ";
    // }


    return 0;
}