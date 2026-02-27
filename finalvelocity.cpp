#include<iostream>
using namespace std;
int main()
{
int fv,iv,t,acc;
cout<<"Enter Initial Velocity(m/s): ";
cin >> iv;
cout<<"Enter Acceleration (m/s^2): ";
cin >> acc;
cout<<"Enter Time(s): ";
cin >> t;
fv=acc*t+iv;
cout<<"Final velocity (m/s): "<<fv;
return 0;
}