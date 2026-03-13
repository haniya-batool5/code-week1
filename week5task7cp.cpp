#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the count of numbers : ";
    cin >> n;
    float a= 0, b = 0, c = 0, d = 0, e= 0;

    for (int i = 0; i < n; i++) {
        int cn;
        cout<<"enter a number ";
        cin >> cn;
        if (cn < 200) 
        {
            a++;
        }
         else if (cn >= 200 && cn <= 399)
        {
            b++;
        } else if (cn >= 400 && cn <= 599) 
        {
            c++;
        } else if (cn >= 600 && cn <= 799) 
        {
            d++;
        } else 
        {
            e++;
        }
    }
    cout << (a / n)*100 << "%" << endl;
    cout << (b / n)*100 << "%" << endl;
    cout << (c / n)*100 << "%" << endl;
    cout << (d / n)*100 << "%" << endl;
    cout << (e / n)*100 << "%" << endl;

    return 0;
}