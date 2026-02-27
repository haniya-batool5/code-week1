#include<iostream>
using namespace std;
int main()
{
float weight,loss;
string name;
cout<<"Enter the Name of person: ";
cin >> name;
cout<<"Enter the target weight loss in kilograms: ";
cin >> weight;
loss=weight*15;
cout<<name<<" will need "<<loss<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions";
return 0;
}