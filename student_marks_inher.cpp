#include<iostream>
using namespace std;
class Student
{
    public:
    Student()
    {
        int Roll_no;
        Getrollno();
        display();  
    }
    int Roll_no;
    void Getrollno()
    {
        cin>>Roll_no;
    }
    void display()
    {
        cout<<Roll_no<<endl;
    }
};
class Test : public Student
{
    public:
    Test()
    {
        int mark_1;
        int mark_2;
        getMarks();
        displayMarks();
    }
    int mark_1;
    int mark_2;
    void getMarks()
    {
        cin>>mark_1;
        cin>>mark_2;
    }
    void displayMarks()
    {
        cout<<mark_1<<endl;
        cout<<mark_2<<endl;
    }
};
class total: public Test
{
    public:
    int c;
    total()
    {
        totle();
        displaytotle();
    }
    void totle()
    {
        c = mark_1+mark_2;
    }
    void displaytotle()
    {
        cout<<c<<endl;
    }
};
int main()
{
    total t;
    return 0;
}