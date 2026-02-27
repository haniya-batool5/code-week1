#include<iostream>
using namespace std;
int main()
{
float v,i,p;
cout<<"Enter Voltage(in volts): ";
cin >> v;
cout<<"Enter Current(in amperes): ";
cin >> i;
p=v*i;
cout<<"the power is "<<p<<" watts";
return 0;
}