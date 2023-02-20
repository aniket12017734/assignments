#include<iostream>
using namespace std;
void sum(int a, int b)
{
    cout<<a+b<<endl;
}
void sum(int a, int b, int c)
{
    cout<<a+b+c<<endl;
}
double sum(double x, double y)
{
    cout<<x+y<<endl;
}
void print(int a)
{
    cout<<"Integer : "<<a<<endl;
}
void print(double f)
{
    cout<<"Float : "<<f<<endl;
}
void print(char* c)
{
    cout<<"Char : "<<c<<endl;
}
int main()
{
    print(23);
    print(20.134);
    print("Megatron");
    sum(45,67);
    sum(23.56,27.890);
    sum(12,67,60);
    return 0;
}