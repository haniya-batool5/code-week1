#include<iostream>
using namespace std;
int main()
{
   int a,b;
   char op;
   cout<<"enter the first number ";
   cin >> a;
   cout<<"enter the operator ";
   cin >> op;
   cout<<"enter the second number ";
   cin >> b;
   if(op=='+'){
    cout<<a<<"-"<<b<<"="<<a-b;
   }
   if(op=='-'){
    cout<<a<<"+"<<b<<"="<<a+b;
   }
   if(op=='*'){
    cout<<a<<"/"<<b<<"="<<a/b;
   }
if(op=='/'){
    cout<<a<<"*"<<b<<"="<<a*b;
   }
}