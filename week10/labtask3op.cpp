#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float number;
    float result;
    cout << "Enter a number ";
    cin >> number;
    result = sqrt(number);
    cout << "The sqaure root of " << number << " is : " << result;
    return 0;
}