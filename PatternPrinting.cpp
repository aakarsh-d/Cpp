//lec 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int  i;
//     if( cin>>i)
//     {
//         cout<<"Aakarsh"<<endl;
//     }
//     if(cout<<"deku")
//     {
//         cout<<"AAKARSH"<<endl;
//     }
// }

// pattern 1 solid rectangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     // outer loop
//     for (int i=0;i<n;i++)
//     {
//         // inner loop
//         for(int i=0;i<n;i++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//pattern 2 half pyramid
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int row=0;row<n;row++)
//     {
//         for(int col=0;col<row+1;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//pattern 3 inverted half pyramid
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// numeric half pyramid
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=1;col<=row+1;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

//inverted numeric pyramid

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<col+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// // full pyramid
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// // inverted full pyramid
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=1;col<row+1;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// numeric hollow full pyramid
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     // int col=1;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=1;col<n-row;col++)
//         {
//             cout<<" ";
//         }
//         if(row==0 || row ==n-1)
//         {
//             for(int col=0;col<row+1;col++)
//             {
//                 cout<<col+1<<" ";
//             }
//             // cout<<endl;
//         }
//         else
//         {
//             // int i=1;
//             cout<<"1";
//             for(int col=0;col<(row+1)-2;col++)
//             {
//                 cout<<"  ";
//             }
//             // i=i+1;
//             cout<<" "<<row+1;
//     }
//         cout<<endl;
//     // col++;
//     }
// }


// // full diamond 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row-1;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<row;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
        
//     }
// }

// //hollow diamond
// #include<iostream>
// using namespace std;
// int main()

// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//     for(int col=0;col<n-row-1;col++)
//     {
//         cout<<" ";
//     }
//     if(row==0)
//     {
//         cout<<"*";
//     }
//     else{
//         cout<<"* ";
//     for(int col=0;col<row+1-2;col++)
//     {
//         cout<<"  ";
//     }
//     cout<<"*";
//     }
//     cout<<endl;
//     }
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<row;col++)
//         {
//             cout<<" ";
//         }
//         if(row==n-1)
//         {
//             cout<<"*";
//         }
//         else{
//             cout<<"* ";
//         for(int col=0;col<n-row-2;col++)
//         {
//             cout<<"  ";
//         }
//         cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//2 method

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     //outer loop
//     for(int row=0;row<n;row++)
//     {
//         // for left spaces
//         for(int col=0;col<n-row-1;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<2*row+1;col++)
//         {
//             if (col==0 || col==2*row) //first and last char star in col
//             {
//                 cout<<"*";
//             }
//             else 
//             {
//                 cout<<" ";
//             }
//         }
//     cout<<endl;
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++)
//     {
//         cout<<" ";
//     }

//     for(int col=0;col<2*n-2*row-1;col++)
//     {
//         if(col==0 || col==2*n-2*row-2)
//         {
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//     }
// }

//flipped solid diamond
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<"*";
//         }
//         for(int col=0;col<2*row+1;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<row+1;col++)
//         {
//             cout<<"*";
//         }
//         for(int col=0;col<2*n-2*row-1;col++){
//         cout<<" ";
//         }
//         for(int col=0;col<row+1;col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//fancy pattern 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<row+1;col++)
//         {
//             cout<<row+1;
//             if(col!=row)//not a last char then 
//             {
//             cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     for (int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<n-row;
//             if(col!=n-row-1)
//             {
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

// }

 
//fancy pattern 2


//  #include<iostream>
//  using namespace std;
//  int main()
// {
//     int n;
//     cin>>n;
    // for(int row=0;row<n;row++)
    // {
        // for(int col=0;col<row+1;col++)
        // {
        // int m=col+1;
        // // char ch=m+'A'-1;
        // cout<<m;
        // }
        //reverse 
        // for(int col=row;col>=1;col--)
        // {
        //     int m=col;
        //     char ch=col+'A'-1;
        //     cout<<ch;
        // }
        // cout<<endl;
    // }

    // int m=1;
    // char ch=m+'a';
    // cout<<ch;
// }




// hollow full pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row-1;col++)
//         {
//             cout<<" ";
//         }
//         // for(int col=0;col<2*row-1;col++)
//         // {
//         if (row ==0  || row==n-1)
//         {
//         for(int col=0;col<row+1;col++)
//         {
//             cout<<"* ";
//         }
//         }
//         else 
//         {
//             cout<<"* ";
//             for(int col=0;col<row+1-2;col++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//         // }
//     }
// }

// hollow inverted half pyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         if (row==0 || row==n-1)
//         {
//         for(int col=0;col<n-row;col++)
//         cout<<"* ";
//         }
//         else
//         {
//             cout<<"* ";
//             for(int col=0;col<n-row-2;col++)
//             {
//                 cout<<"  ";
//             }
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

//numerc hollow inverted half pyramid
// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         if
//     }
// }

















//fancy pattern 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<2*row+1;col++)
        {
        if(col==2*row || col==0){
            cout<<"*";
        }
            for(int col=0;col<row;col++)
            {
                cout<<col+1;
            }
            for(int col=row-1;col>=1;col--)
            {
                cout<<col;
            }
        }
        cout<<endl;
    }
    
}