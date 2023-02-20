#include<iostream>
using namespace std;
int main()
{
    int age=10;
    try
    {
        {
            if(age>=18)
            throw"Eligible to vote";
            else
            throw(age);
        }
    }
    catch(...)
    {
        cout<<"Not Eligible";
    }
    return 0;
}