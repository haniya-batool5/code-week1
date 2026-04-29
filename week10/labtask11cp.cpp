#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
void calculatePoolState(float V, float P1, float P2, float H) {
    float waterP1 = P1 * H;
    float waterP2 = P2 * H;
    float totalWater = waterP1 + waterP2;

    if (totalWater <= V) {
        // Calculating percentages as integers as per your output example
        int poolFullPercent = (totalWater / V) * 100;
        int pipe1Percent = (waterP1 / totalWater) * 100;
        int pipe2Percent = (waterP2 / totalWater) * 100;

        cout << "The pool is " << poolFullPercent << "% full. ";
        cout << "Pipe 1: " << pipe1Percent << "%. ";
        cout << "Pipe 2: " << pipe2Percent << "%." << endl;
    } else {
        float overflow = totalWater - V;
        cout << "For " << H << " hours, the pool overflows with " << overflow << " liters." << endl;
    }
}

int main() {
    float V, P1, P2, H;

    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;

    calculatePoolState(V, P1, P2, H);

    getch(); 
    return 0;
}