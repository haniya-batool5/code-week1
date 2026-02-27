#include<iostream>
using namespace std;
int main()
{
int age,moves,final;
cout<<"Enter the person's age: ";
cin >> age;
cout<<"Enter the number of times they've moved: ";
cin >> moves;
final=age/(moves+1);
cout<<"Average number of years lived in the same house: "<<final;
return 0;
} 
