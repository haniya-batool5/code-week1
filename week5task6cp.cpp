#include<iostream>
using namespace std;
int main()
{
    int a,b,tem,gcd,lcm,x,y;
    cout<<"enter the first number ";
    cin >> a;
    cout<<"enter the second number ";
    cin >> b;
    x=a;
    y=b;
    while(b!=0)
    {
      tem=b;
      b=a%b;
      a=tem;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    cout<<"the gcd is "<<gcd<<endl;
    cout<<"the lcm is "<<lcm<<endl;
}