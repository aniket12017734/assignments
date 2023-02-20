#include<iostream>
using namespace std;
int  main()
{
	int p,n,i[100],j[100];
	cout<<"Please enter the size of array :"<<endl;
	cin>>n;
	cout<<"Please enter the 1ST array elements :"<<endl;
	for(p=0;p<n;p++)
	{
	
	cin>>i[p];
    }
    cout<<"elements of 1st array :"<<endl;
	for(p=0;p<n;p++)
	{
        cout<<i[p]<<" ";
    }
    for(p=0;p<n;p++)
    {
        j[p]=i[p];
    }
    cout<<endl<<"element 2nd array :"<<endl;
    for(p=0;p<n;p++)
    {
        cout<<j[p]<<" ";
    }
}