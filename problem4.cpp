#include<iostream>
using namespace std;
int main()
{
    float redrose,whiterose,tulips,total;
    float dis;
    cout<<"enter the number of roses ";
    cin >> redrose;
    cout<<"enter the number of white rose ";
    cin >> whiterose;
    cout<<"enter the number of tulips ";
    cin >> tulips;
    total= redrose*2.00 + whiterose*4.10 + tulips*2.50;
    if(total>200)
    {
        dis=total-total*0.2;
        ;
    }
    cout<<"the original price= "<<total<<endl;
    cout<<"the discounted price = "<<dis;


}