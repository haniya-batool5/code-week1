#include <iostream>
using namespace std;
int oddishorevenish(int n);
int main()
{
    int n, result;
    cout << "Enter the five digit number ";
    cin >> n;
    result = oddishorevenish(n);
    if (result % 2 == 0)
    {
        cout << "Evenish " << endl;
    }
    else
    {
        cout << "Oddish " << endl;
    }
}
int oddishorevenish(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int num = n % 10;
        sum = num + sum;
        n = n / 10;
    }
    return sum;
}
