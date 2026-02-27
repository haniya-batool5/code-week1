#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
int a,b,c,d;
cout<<"Enter the 4- digit number: ";
cin >> n;
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
sum=a+b+c+n;
cout<<"Sum of individual digit is: "<<sum<<endl;
}
