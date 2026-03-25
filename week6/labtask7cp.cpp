#include<iostream>
using namespace std;
int main()
{
    int nr;
    float a[100];
    float sum=0;
    cout<<"Enter the number of resistors in the series circuit ";
    cin >> nr;
    cout<<"Enter the resistance (in ohms) of the "<<nr<<" resistor, one per line "<<endl;
    for(int i=0 ; i<nr ; i++)
    {
        cin >>a[i];
        sum=sum+a[i];
    }
    cout<<"The total resistance of the series circuit is "<<sum<<" ohms ";
}