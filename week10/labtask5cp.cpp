#include <iostream>
#include <cmath>
using namespace std;

float detr(float a, float b, float c);

int main()
{
    float a, b, c;
    double root1, root2;

    cout << "Enter the value of a ";
    cin >> a;
    cout << "Enter the value of b ";
    cin >> b;
    cout << "Enter the value of c ";
    cin >> c;

    float y = detr(a, b, c);

    if (y == 0)
    {
        root1 = -b / (2 * a);
        cout << "Root = " << root1;
    }
    else if (y > 0)
    {
        root1 = (-b + sqrt(y)) / (2 * a);
        root2 = (-b - sqrt(y)) / (2 * a);

        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-y) / (2 * a);

        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}

float detr(float a, float b, float c)
{
    return (pow(b,2) - 4 * a * c);
}