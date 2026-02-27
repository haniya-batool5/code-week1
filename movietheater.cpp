#include<iostream>
using namespace std;
int main()
{
string name;
float adult,child,adultprice,childprice,percent,total,final;
float charity;
cout<<"Enter the name of movie: ";
cin >> name;
cout<<"Enter the price of adult ticket: ";
cin >> adult;
cout<<"Enter the price of child ticket: ";
cin >> child;
cout<<"Enter the number of adult tickets that are sold: ";
cin >> adultprice;
cout<<"Enter the number of child tickets that are sold: ";
cin >> childprice;
cout<<"Enter the percentage of amount to be donated to charity: ";
cin >> percent;
total=(adult*adultprice)+(child*childprice);
charity=total*(percent/100);
final=total-charity;
cout<<"Movie : "<<name<<endl;
cout<<"Total amount gnerated from the ticket:$ "<<total<<endl;
cout<<"Donation to charity("<<percent<<"):$ "<<charity<<endl;
cout<<"Remaining amount after donation :$"<<final;
return 0;
}




