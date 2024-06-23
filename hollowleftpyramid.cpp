#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<n;row++)
    {
            if(row==1 || row==2 || row==n-1)
            {
                for(int col=1;col<=row;col++){
                cout<<"*";
                }
            }
            else
            {
                for(int col=0;col<n;col++)
                {
                    if(col==0 || col==row-1)
                    {
                        cout<<"*";
                    }
                    else
                    cout<<" ";
                }
            }
            cout<<endl;
        }
}