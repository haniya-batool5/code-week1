#include <iostream>
using namespace std;

void numberToWords(int n)
{
    int tens = n / 10;
    int ones = n % 10;

    // 1–19
    switch (n)
    {
        case 1: cout << "One"; return;
        case 2: cout << "Two"; return;
        case 3: cout << "Three"; return;
        case 4: cout << "Four"; return;
        case 5: cout << "Five"; return;
        case 6: cout << "Six"; return;
        case 7: cout << "Seven"; return;
        case 8: cout << "Eight"; return;
        case 9: cout << "Nine"; return;
        case 10: cout << "Ten"; return;
        case 11: cout << "Eleven"; return;
        case 12: cout << "Twelve"; return;
        case 13: cout << "Thirteen"; return;
        case 14: cout << "Fourteen"; return;
        case 15: cout << "Fifteen"; return;
        case 16: cout << "Sixteen"; return;
        case 17: cout << "Seventeen"; return;
        case 18: cout << "Eighteen"; return;
        case 19: cout << "Nineteen"; return;
    }

    // 20–99 (tens)
    switch (tens)
    {
        case 2: cout << "Twenty"; break;
        case 3: cout << "Thirty"; break;
        case 4: cout << "Forty"; break;
        case 5: cout << "Fifty"; break;
        case 6: cout << "Sixty"; break;
        case 7: cout << "Seventy"; break;
        case 8: cout << "Eighty"; break;
        case 9: cout << "Ninety"; break;
    }

    // ones part
    if (ones != 0)
    {
        cout << " ";

        switch (ones)
        {
            case 1: cout << "One"; break;
            case 2: cout << "Two"; break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four"; break;
            case 5: cout << "Five"; break;
            case 6: cout << "Six"; break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine"; break;
        }
    }
}

int main()
{
    int num;
    cout << "Enter number (1 to 99): ";
    cin >> num;

    numberToWords(num);

    return 0;
}