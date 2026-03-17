
#include<iostream>
using namespace std;
int main()
{
    string name;
    float ticket,total;
    cout<<"enter the country name ";
    cin >> name;
    cout<<"enter the ticket price in dollars ";
    cin >> ticket;
    if(name=="ireland"||name=="Ireland"||name=="IRELAND")
    {
        total=ticket-ticket*0.1;
    }
    else{
        total=ticket-ticket*0.05;
    }
    cout<<"the final price after discount is "<<total;
}