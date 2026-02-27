#include<iostream>
using namespace std;
int main()
{
int birthrate,population,final;
cout<<"Enter the current world population: ";
cin >> population;
cout<<"Enter the monthly birth rate(number of birth per month): ";
cin >> birthrate;
final=population+birthrate*360;
cout<<"population in three decade will be: "<<final;
}