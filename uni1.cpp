#include<iostream>
using namespace std;
int main()
{
    int s = 2;
    int c = 3;
    float cir = 4.5;
    cout<<"square = "<<s*s<<endl;
    cout<<"cube = "<<c*c*c<<endl;
    cout<<"circumference = "<<2*3.14*cir<<endl;
    s=s+c;
    cout<<s<<endl;;
    int a = s++;
    int b = ++c;
    cout<<a<<" "<<b<<endl;
    int d = a++ - --b + ++a - b--;
    cout<<d<<endl;
    int age =12;
    if (age>=18)
    {
        cout<<"He is eligible to vote"<<endl;
    }
    else{
        cout<<"you are not eligible to vote"<<endl;
    }
    int weight = 60;
    if(age<=18 && weight <=50)
    {
        cout<<"Donate the blood"<<endl;
    }
    else
    {
        cout<<"Dont"<<endl;
    }
    int num = 16;
    if(num%2==0 && num%3==0)
    {
        cout<<"idiot";
    }
    else if(num%2==0)
    {
        cout<<"big idiot"<<endl;
    }
    else if(num%3==0)
    {
        cout<<"very big idiot"<<endl;
    }
    else 
    {
        cout<<"maha naraki"<<endl;
    }
    if(age>=12)
    {
        if(weight<=110)
        {
            cout<<"he can jump"<<endl;
        }
        else{
            cout<<"add extra rope"<<endl;
        }
    }
    else
    {
        cout<<"he can not jump"<<endl;
    }
    for  (int i = 0; i < 6; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int x=1; x<=10; x=x+3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x=10; x>0; x=x-2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int t=5;
    while(t>0)
    {
        t=t*t-1;
        t=t-2;
    }
    cout<<t<<endl;
    return 0;
    
}