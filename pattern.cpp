#include<iostream>
using namespace std;
// void function3(int a)
// {
//     for(int i=0;i<a;i++)
//     {
//         cout<<a;
//     }
// }
// void function2(int b)
// {
//     for(int i=0;i<b;i++)
//     {
//         function3(i);
//     }
// }
// int main()
// {

//     for(int i=1;i<=9;i++)

//     {
//         // function2(i);
//         for(int j=0;j<=i;j++)
//     {
//         // function3(i);
//          for(int k=0;k<j;k++)
//     {
//         cout<<" "<<j;
//     }
//     }
//         cout<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 8;
    
    
//     for(int i=1;i<=n;i++)
//     {
//     for(int j=0;j<n-i;j++)
//     {
//         cout<<"*";
//     }
//         for(int k=0;k<i;k++)
//         {
//             cout<<" "<<i<<" ";
//         }
//      for(int j=0;j<n-i;j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//     }
// }
void even()
{

}
int main()
{
    int row;
    int col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
    
            // if(i==1 || i==row-1)
            // {
            // for(int k=1;k<=col;k++){
            // cout<<"#";}
            // }
            // else 
            if(i%2!=0)
            {
                for(int l=1;l<=col;l++)
                cout<<"#";
            }
            if(i%2==0)
            {
                // for(int co=1;co<=row;co+=4)
                //     {
                    // int t=i;
                    int a=i/2;
                    if(a%2!=0)
                    {
                    // for(int t=i;t<=row;t+=4)
                    // {
                        for(int colu=1;colu<=col-1;colu++)
                        {
                        cout<<".";
                        }
                    cout<<"#";
                    //  t+=4;
                    }
                    // }
                    // int p=4;
                    // while (p<=row)
                    else
                    {
                    // for(int p=i;p<=row;p+=4)
                    // {
                    // }
                    // for(int ci=4;ci<row;ci+=4)
                    // {
                    cout<<"#";
                        for(int v=2;v<=col;v++)
                        cout<<".";
                        // p+=4;
                    }
                    // }
                    // }
            }

            
        

    //     for(int j=0;j<=col;j+=2)
    //     {
    //        cout<<"#";
    //        break;
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<row;i+=2)
    // {        for(int k=1;k<=col;k+=2)
    //     {
    //         cout<<".";
    //         break;
    //     }
        cout<<endl;
    }
    return 0;
}