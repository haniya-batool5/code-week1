#include<iostream>
using namespace std;
int main()
{
  int age,toyprice,machineprice;
  cout<<"enter the lilly's age ";
  cin >> age;
  cout<<"enter the price of washing machine ";
  cin >> machineprice;
  cout<<"enter the unit price of each toy ";
  cin >> toyprice;
  int toycount=0;
  float totalsaved=0;
  float gift=10.00;
  for(int i=1;i<=age; i++)
  {
    if(i%2==0)
    {
        totalsaved=totalsaved+gift;
        totalsaved=totalsaved-1.00;
        gift=gift+10.00;
    }
    else{
        toycount++;
    }

  } 
  totalsaved=totalsaved+(toycount*toyprice);
  if(totalsaved>=machineprice)
  {
    cout<<"YES! "<<totalsaved-machineprice<<endl;
  } 
  else{
    cout<<"NO! \n"<<machineprice-totalsaved<<endl;
  }
}