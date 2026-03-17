#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the number ";
    cin >>n;
    if(n==0)
    {
        count=1;
    }
    for(int i=n; i>0;i=i/10)
    {
        count=count+1;
    }
    cout<<"total number of digits "<<count;
}
