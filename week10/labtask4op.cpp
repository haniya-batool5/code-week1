#include <iostream>
#include<cmath>
using namespace std;
float h(float distance , float angle)
{
    float result;
    result=distance * tan(angle/57.2958);
    return result;  
}
int main()
{
    float height, distance, angle;
    cout<<"Enter the Distance from base of the tree: ";
    cin >> distance;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin >> angle;
    float y;
    y=h(distance, angle );
    cout<<"The Height of the tree is: "<<y<<" feet "<<endl;
}