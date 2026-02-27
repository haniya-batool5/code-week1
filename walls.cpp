#include<iostream>
using namespace std;
int main()
{
int n,w,h,res;
cout<<"Enter paint area : ";
cin >> n;
cout<<"Enter width: ";
cin >> w;
cout<<"Enter height: ";
cin >> h;
res=n/(w*h);
cout<<"Walls painted = "<<res;
return 0;
}