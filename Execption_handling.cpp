#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    try
    {
        {
            if(marks>50)
            cout<<marks;
            else
            throw(marks);
        }
    }
    catch(...)
    {
        cout<<"First Round not Cleared";
    }
    return 0; 
}