#include<iostream>
using namespace std;
int punctuationCout(string input)
{
    int count = 0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='!'|| input[i]==';'|| input[i]==','|| 
                   input[i]==':'|| input[i]=='?'|| input[i]=='.')
                   {
                        count++;
                   }
    }
    return count;
}
int main()
{
    string s="Hello.World!";
    cout<<punctuationCout(s)<<endl;
}