#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 0;
    if(n == 1)
    return 1;
    return n + factorial(n - 1);
}
int main()
{
    int a = 5;
    cout<<factorial(a)<<endl;
}