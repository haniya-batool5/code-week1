#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    while(n>=0)
    {
        sum=sum+n;
        cout<<"enter a number ";
        cin >> n;
    }
    cout<<"the sum of numbers is "<<sum<<endl;
}