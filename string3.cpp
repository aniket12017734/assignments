#include<iostream>
using namespace std;
string charConversion(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else
        {
            s[i]=s[i];
        }
    }
    return s;
}
int main()
{
    string s="A public Transport";
    cout<<charConversion(s);
    return 0;
}