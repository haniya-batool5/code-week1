#include<iostream>
using namespace std;
int main()
{
    int currentbalance=1000;
    int atmpin;
    int withdraw=0;
    int deposite=0;
    for(int n=1; n<=3; n++)
    {
        cout<<" enter the atm pin ";
        cin >> atmpin;
        if(atmpin==1234)
        {
            cout<<"login successful ";
            break;
        }
        else 
        {
            cout<<"login failed ";
        }
        if(n==3 && atmpin!=123)
        {
            cout<<"TOO MANY ATTEMPTS CARD BLOCKED ";
        }
    }
    for(int m=1;m<=7;m++)
    {
        cout<<endl<<"-----ATM MENU------\n";
        cout<<"1. check balance "<<endl;
        cout<<"2. deposite money "<<endl;
        cout<<"3. withdraw money"<<endl;
        cout<<"4. exit "<<endl<<endl;
        int choice;
        cout<<"enter the choice ";
        cin >> choice;
        if(choice==1)
        {
            cout<<"CURRENT BALANCE = "<<currentbalance<<endl;
        } 
        else if(choice==2)
        {
            cout<<"enter ammount of deposite ";
            cin >> deposite;
            currentbalance=currentbalance+deposite;
            cout<<"MONEY DEPOSITED SUCCESSFULLY "<<endl;
        }
        else if(choice==3)
        {
            cout<<"enter the amount of withdraw ";
            cin >> withdraw;
            currentbalance=currentbalance-withdraw;
            cout<<"PLEASE COLLECT YOUR CASH "<<endl;
        }
        else if(choice==4)
        {
            cout<<"THANK YOU FOR USING ATM  "<<endl;
            break;
        }
        else
        {
            cout<<"enter a valid choice "<<endl;
            
        }



    }
}