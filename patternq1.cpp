#include<iostream>
using namespace std;

int main()
{
    int row;
    int col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
            if(i%2!=0)
            {
                for(int l=1;l<=col;l++)
                cout<<"#";
            }
            if(i%2==0)
            {
                    int a=i/2;
                    if(a%2!=0)
                    {
                        for(int colu=1;colu<=col-1;colu++)
                        {
                        cout<<".";
                        }
                    cout<<"#";
                    }
                    else
                    {
                    cout<<"#";
                        for(int v=2;v<=col;v++)
                        cout<<".";
                    }
            }
        cout<<endl;
    }
    return 0;
}