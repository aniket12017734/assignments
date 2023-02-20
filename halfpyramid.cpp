#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int input;
    int a=1;
    cin>>input;
    for (i = 1; i <= (input); ++i) {
      for (j = 1; j <= i; ++j)
    {
        cout<<a;
    }
      ++a;
      cout<<endl;;
   }
}