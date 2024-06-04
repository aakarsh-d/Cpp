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

int main()
{
    int row;
    int col;
    cin>>row>>col;
    for(int i=1;i<row;i++)
    {
        for(int i=1;i<col;col++)
        {
            if(row%2!=0)
            {
                cout<<"#";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}