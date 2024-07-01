#include<iostream>
using namespace std;
int main()
{
    int row,col,no;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>no;
            arr[i][j]=no;
        }
        cout<<endl;
    }
    for(int i=0;i<row;row++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}