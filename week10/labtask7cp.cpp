#include <iostream>
using namespace std;
int reverse (int n);
int main()
{
    int n,afterreverse; 
    cout<<"Enter a three digit number ";
    cin >> n;
    afterreverse= reverse(n);
    if(n==afterreverse)
    {
        cout<<"The number is symmetrical "<<endl;
    }
    else{
        cout<<"The number is not symmetrical "<<endl;
    }
}
int reverse (int n )
{
    int result=0;
    while(n!=0)
    {
        result=result*10+n%10;
        n=n/10;
    }
    return result;
}