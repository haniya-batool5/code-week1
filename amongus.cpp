#include<iostream>
using namespace std;
int main()
{
float impostercount,playercount,imposter;
cout<<"Enter imposter count: ";
cin >> impostercount;
cout<<"Enter player count: ";
cin >> playercount;
imposter=100*(impostercount/playercount);
cout<<"chance of being an imposter: "<<imposter<<"%";
return 0;
}
