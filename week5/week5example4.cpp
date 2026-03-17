#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the number ";
    cin >> n;
    for(int a=n;a>0;a=a/10)
    {
        count=count+1;
    }
    cout<<"the total number of digits is "<<count;
}