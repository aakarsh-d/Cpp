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

    for(int index=0;index<n;index++)
    {
        for(int i=index;i<n;i++)
        {
            if(arr[i]<arr[index]){
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}