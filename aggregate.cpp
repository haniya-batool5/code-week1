#include<iostream>
using namespace std;
int main()
{
string name;
cout<<"Enter your name:";
cin >> name;
float m,i,e,a;
cout<<"Enter matriculations marks (out of 1100):";
cin >> m;
cout<<"Enter intermediate marks (out of 550):";
cin >> i;
cout<<"Enter ECAT marks (out of 400):";
cin >> e;
a=(e/400)*50+(i/550)*40+(m/1100)*10;
cout<<"aggregate score for "<<name<<" is "<<a;
return 0;
}

