#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    if(n%15==0)
    {
        cout<<3<<endl;
    }
    else if (n%5==0)
    {
        cout<<2<<endl;
    }
    else if (n%3==0)
    {
        cout<<145<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}