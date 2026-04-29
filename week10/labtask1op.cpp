#include <iostream>
using namespace std;
int min(int n1, int n2)
{
    int lower;
    if (n1 < n2)
        lower = n1;
    else
        lower = n2;
    return lower;
}
int main()
{
    int number1, number2;
    int y;
    cout << "Enter the first number ";
    cin >> number1;
    cout << "Enter the second number ";
    cin >> number2;

    y = min(number1, number2);
    cout<<"Minimum number is "<<y;
    return 0;
}
