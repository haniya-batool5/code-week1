#include<iostream>
using namespace std;
int main()
{
  int  coins[4];
  cout<<"Enter the quarters, dimes, nickels, and pennies "<<endl;
  for( int i=0; i<4 ; i++)
  {
     cin >> coins[i];
  }
  double dues;
  cout<<"Enter the dues amount $";
  cin >> dues;
  double total;
  total=coins[0]*0.25+coins[1]*0.10+coins[2]*0.05+coins[3]*0.01;
  if(total>=dues)
  {
    cout<<"Can yoy pay the amount ? YES ";
  }
  else 
  {
    cout<<"Can yoy pay the amount ? NO ";
  }
}