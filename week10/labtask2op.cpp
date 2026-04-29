#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float base;
    float power, result;
    cout<<"Enter the Base number ";
    cin >> base;
    cout<<"Enter the Exponent ";
    cin >> power;
    result=pow(base,power);
    cout<<base<<" raised to power "<<power<<" is : "<<result;
}