#include<iostream>
using namespace std;
class Person
{
    public:
    string Profession;
    int age;
    Person()
    {
        Profession="unemployed";
        age=16;
    }
    void walk()
    {
        cout<<"I can walk."<<endl;
    }
    void talk()
    {
        cout<<"I can talk."<<endl;
    }
    void display()
    {
        cout<<"My profession is "<<Profession<<endl;
    }


};