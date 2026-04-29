#include <iostream>
using namespace std;
void timetravel(int hour, int min);
int main()
{
    int hour, min;
    cout << "Enter the hours ";
    cin >> hour;
    cout << "Enter the minutes ";
    cin >> min;
    cout << "Future time " ; timetravel(hour, min);
}
void timetravel(int hour, int min)
{
    min = min + 15;
    if (min >= 60)
    {
        min = min - 60;
        hour = hour + 1;
    }
    if (hour >= 24)
    {
        hour = 0;
    }

    if (hour < 10)
        cout << "0";
    cout << hour << ":";

    if (min < 10)
        cout << "0";
    cout << min;
}