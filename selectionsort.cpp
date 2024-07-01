#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++)
    {
        
    }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=1;j<n;j++)
//         {
//             if(arr[j]<arr[i]){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             }
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
}