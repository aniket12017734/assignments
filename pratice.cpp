#include<iostream>
using namespace std;
int ropeLenght(int a, int b)
{
    int len_of_rope;
    len_of_rope=2*(a+b);
    return len_of_rope;
}
int quantityOfcarpet(int a, int b)
{
    int area;
    area=a*b;
    return area;
}
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<"Length of Required for ground : "<<ropeLenght(a, b)<<" METER"<<endl;
    cout<<"Quantity of carpet for ground : "<<quantityOfcarpet(a, b)<<" sq METER"<<endl;
}