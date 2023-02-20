#include<iostream>
using namespace std;
class Number
{
    int a;
    float b;
    public:
    int digit(int x)
    {
        a=x;
        return a;
    }
    double digit(double y)
    {
        b=y;
        return b;
    }
};
int main()
{
    Number n;
    cout<<n.digit(4)<<endl;
    cout<<n.digit(7.89)<<endl;
    return 0;
}