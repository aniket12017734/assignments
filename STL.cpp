#include <iostream>

using namespace std;

int main()

{

int n;

cin>>n;

int a=0;

for(int i=1;i<=n;i++)

{

for(int j=1;j<=i;j++)

{

a=a+1;

cout<<a;

if(j!=i)

cout<<"*";

}

cout<<"\n";

}

// for(int i=n;i>=1;i--)

// {

// a=a-i;

// for(int j=1;j<=i;j++)

// {

// cout<<a+j;

// if(j!=i)

// cout<<"*";

// }

// cout<<"\n";

// }

return 0;

}