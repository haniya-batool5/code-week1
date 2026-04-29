#include <iostream>
using namespace std;
int add(int num1, int num2);
int main()
{
    int number1, number2;
    cout << "Enter the First Number ";
    cin >> number1;
    cout << "Enter the Second Number ";
    cin >> number2;
    add(number1, number2);
}
int add(int num1, int num2)
{
    cout << "sum is " << num1 + num2 << endl;
}