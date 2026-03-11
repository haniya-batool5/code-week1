#include<iostream>
using namespace std;
int main()
{
    int city1,city2;
    cout<<"enter the temperature in city 1 ";
    cin >> city1;
    cout<<"enter the temperatur in city 2 ";
    cin >> city2;
    if((city1-city2)>10)
    { 
        cout<<"difference is too big\n";
    }
    cout<<"progam ends";
}