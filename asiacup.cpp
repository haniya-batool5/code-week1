#include<iostream>
using namespace std;
int main()
{
int wins,draws,losses;
cout<<"Enter the numbers of wins: ";
cin >> wins;
cout<<"Enter the numbers of draws: ";
cin >> draws;
cout<<"Enter the number of losses: ";
cin >> losses;
int res;
res=(wins*3)+(draws*1)+(losses*0);
cout<<"Pakistan has obtained " <<res<<" in asia cup tournament";
return 0;
}  


