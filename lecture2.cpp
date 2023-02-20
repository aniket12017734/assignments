
#include<iostream>
using namespace std;
main()
{
    int a[5],i;
    int n=0;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>9&&a[i]<100)
        {
            n=n+a[i];
        }
    }
    cout<<"Sum is "<<n<<endl;
}
