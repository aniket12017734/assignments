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
        if(a[i]>25)
        {
            n=n+1;
        }

    }
    cout<<"Total Number of element is "<<n<<endl;
    return 0;
}