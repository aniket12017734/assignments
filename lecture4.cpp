#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;


int main() {
int n;
int temp;
cin>>temp;
int pos;
if(temp!=20)
{
cout<<"Invalid size of array";
exit(0);
}
else
{
n=temp;
}
char a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int j=0;j<n;j++)
{
while((a[j]>=65)&&(a[j]<=90))
{
for( int k=n-1;k>j;k--)
{
a[k+1]=a[k];
pos=k+1;
}
a[j+1]=tolower(a[j]);
break;
}
}
for(int i=0;i<=pos;i++)
{
//while()
cout<<a[i]<<" ";
}

return 0;
}

