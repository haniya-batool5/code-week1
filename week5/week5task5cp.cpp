#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,count;
    cout<<"Enter the number ";
    cin >> n;
    while(n>0)
    {
       count=n%10;
       sum=sum+count;
       n=n/10;
    }
    cout<<"sum of digits "<<sum<<endl;
    
}