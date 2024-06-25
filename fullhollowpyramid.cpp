  #include<iostream>
  using namespace std;
  int main()
  {
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            cout<<" ";
        }
        if(row==0 || row==1 || row==n-1)
        {
        for(int col=0;col<row;col++)
        {
            cout<<"*";
        }
        }
        else{
            for(int col=0;col<=row;col++){
            if(col==0 || col==n-row)
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