#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        if(row==0 || row==n-2 || row==n-1)
        {
            for(int col=0;col<n-row;col++)
            {
            cout<<"*";
            }
        }
        else
        {
            for(int col=1;col<n;col++)
            {
                if(col==1 || col==n-row)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}