#include<iostream>
using namespace std;
int main()
{
float weight,cost,size,perpound,persquare;
cout<<"Enter the size of fertilizer bag in pounds: ";
cin >> weight;
cout<<"Enter the cost of bag: $";
cin >> cost;
cout<<"Enter the size of area in square that can covered by the bag: ";
cin >> size;
perpound=cost/weight;
persquare=cost/size;
cout<<"Cost of fertilizer per pound:$ "<<perpound<<endl;
cout<<"Cost of fertilizing per square foot:$ "<<persquare;
return 0;
}
