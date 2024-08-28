#include<iostream>
#include<String>
using namespace std;
int length(int l)
{
    return to_string(l).length();
}
int main()
{
    int N;
    cin>>N;
    int n=length(N);
    int count=0,a;
    for(int i=0;i<n;i++)
    {
        a=N%10;
        N=N/10;
        if(a%n==0)
        {
            count++;
        }
    }
    cout<<count;

}