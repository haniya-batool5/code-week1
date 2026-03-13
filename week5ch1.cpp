#include<iostream>
using namespace std;
int main()
{
 int a,b,t,gcd,lcm;
 cout<<"enter the first number ";
 cin >> a;
 cout<<"enter the second number ";
 cin >> b;
 int x=a;
 int y=b;
 while(b!=0)
 {
    t=b;
    b=a%b;
    a=t;
 }
 gcd=a;
 lcm=(x*y)/gcd;
 cout<<"GCD of "<<x<<" and "<<y<<" is "<<gcd<<endl;
 cout<<"LCM of "<<x<<" and "<<y<<" is "<<lcm<<endl;

}