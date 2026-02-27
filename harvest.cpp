#include<iostream>
using namespace std;
int main()
{
float vegetableperkilo,fruitperkilo,rup=1.94,total,earning;
int totalveg,totalfruit;
cout<<"Enter vegetable price per kilogram (in coins ): ";
cin >> vegetableperkilo;
cout<<"Enter fruit price per kilogram (in coins ): ";
cin >> fruitperkilo;
cout<<"Enter total kilograms of vegetables: ";
cin >> totalveg;
cout<<"Enter total kilograms of fruits: ";
cin >> totalfruit;
total=(totalveg*vegetableperkilo)+(totalfruit*fruitperkilo);
earning=total/rup;
cout<<"Total earnings in rupee (Rps): "<<earning;
return 0;
}




 

 

