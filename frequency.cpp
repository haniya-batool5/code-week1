#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number ";
    cin >> num;
    
    int count;
    int a,b,c,d,e,f,g,h,i,j;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    i=0;
    j=0;
    while(num>0)
    {
        count=num%10;
        {
        if(count==0)
        {
          a=a+1;
        }
         if(count==1)
        {
          b=b+1;
        } if(count==2)
        {
           c=c+1;
        } if(count==3)
        {
           d=d+1;
        } if(count==4)
        {
          e=e+1;
        } if(count==5)
        {
           f=f+1;
        } if(count==6)
        {
          g=g+1;
        } if(count==7)
        {
          h=h+1;
        } if(count==8)
        {
           i=i+1;
        } if(count==9)
        {
        j=j+1;}
        }
        num=num/10;
       }
    cout<<"the frequency of zero in this pogram is "<<a<<endl;
    cout<<"the frequency of one in this pogram is "<<b<<endl;
    cout<<"the frequency of two in this pogram is "<<c<<endl;
    cout<<"the frequency of three in this pogram is "<<d<<endl;
    cout<<"the frequency of four in this pogram is "<<e<<endl;
    cout<<"the frequency of five in this pogram is "<<f<<endl;
    cout<<"the frequency of six in this pogram is "<<g<<endl;
    cout<<"the frequency of seven in this pogram is "<<h<<endl;
    cout<<"the frequency of eight in this pogram is "<<i<<endl;
    cout<<"the frequency of nine in this pogram is "<<j<<endl;
    
    }
