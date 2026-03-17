#include<iostream>
using namespace std;
int main()
{
    int  amount,total;
    cout<<"enter the amount ";
    cin >> amount;
    if(amount<=5000)
    {
    total=amount-amount*0.05;
    }
    if(amount>5000){
        total=amount-amount*0.10;
    }
    cout<<"Your discounted bill is: "<<total<<endl;
}
