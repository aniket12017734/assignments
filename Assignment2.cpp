#include<iostream>
using namespace std;
class Account
{
    string name_of_depositor;
    int Account_no;
    string type_of_account;
    int balance_amount;
    int deposited_amount;
    int widrwal_amount;
    public:
    Account()
    {

    }
    void getValues()
    {
        cout<<"Account No : ";
        cin>>Account_no;
        cout<<"Name : ";
        cin>>name_of_depositor;
        cout<<"Account type : ";
        cin>>type_of_account;
        cout<<"Balance : ";
        cin>>balance_amount;
        cout<<"Enter Deposit Amount : ";
        cin>>deposited_amount;
        cout<<"Enter Withdraw Amount : ";
        cin>>widrwal_amount;
    }
    int Deposit()
    {
        balance_amount=balance_amount+deposited_amount;
        return balance_amount;
    }
    int withdrawl()
    {
        balance_amount=balance_amount-widrwal_amount;
        return balance_amount;
    }
    void display()
    {
        cout<<"Account No : "<<Account_no<<endl;
        cout<<"Name : "<<name_of_depositor<<endl;
        cout<<"Account type : "<<type_of_account<<endl;
        cout<<"Balance : "<<withdrawl()<<endl;
    }

};
int main()
{
    Account a;
    a.getValues();
    a.Deposit();
    a.display();
    
}
