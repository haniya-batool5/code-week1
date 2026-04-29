#include <iostream>
using namespace std;
int max(int n1, int n2)
{
    int greater;
    if (n1 > n2)
        greater = n1;
    else
        greater = n2;
    return greater;
}
int main()
{
    int number1, number2;
    int y;
    cout << "Enter the first number ";
    cin >> number1;
    cout << "Enter the second number ";
    cin >> number2;

    y = max(number1, number2);
    cout<<"Greater is "<<y;
    return 0;
}