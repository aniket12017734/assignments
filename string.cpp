#include<iostream>
using namespace std;
int totalCharacter(string s)
{
    int count=0;
    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n;i++)
    {
        count=count+1;
    }
    return count;
}
int main()
{
    string s ="Your name is Blah";
    cout<<totalCharacter(s)<<endl;
    return 0;
}