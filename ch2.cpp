#include<iostream>
using namespace std;
int main()
{
    float salary=10000,laptopprice=50000,month=6;
    float advance=0.5;
    float total;
    total=salary*advance*month;
    if(total > laptopprice)
    {
        cout<<"Ali can buy the laptop ";
    }
    else{
        float rem,finall;
        rem=laptopprice-total;
        finall=(rem/(salary*advance));
        float reqmonth;
        reqmonth=finall+month;
        cout<<"months required to buy laptop is "<<reqmonth;

    }
}