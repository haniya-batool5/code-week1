#include<iostream>
using namespace std;
int main()
{
    int n=1,sum=0;
    while(n<=5)
    {
        sum=sum+n;
        n=n+1;
    }
    cout<<"the sum of ten natural number "<<sum;
}