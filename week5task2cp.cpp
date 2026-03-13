#include <iostream>
using namespace std;
main()
{
    int a = 0, b = 1, nex=0;
    int n=0;
    cout << "How many numbers of Fibonacci Series you want to print: ";
    cin >> n; 

    cout << a << ", ";
    cout << b;
    for(int x = 1; x < n - 1; x = x + 1)
    {
        nex = a + b;
        cout << ", " << nex;
        a = b;
        b = nex;
    }
}
