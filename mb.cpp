#include<iostream>
using namespace std;
int main()
{
float mb,r;
float kb=1024,b=8;
cout<<"Enter the size in megabytes (MB):";
cin >> mb;
r=mb*kb*kb*b;
cout<<mb<<" MB is equivalent to "<<r<<" bits";
return 0;
}

 

