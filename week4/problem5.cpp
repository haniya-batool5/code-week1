#include<iostream>
using namespace std;

int main()
{
    int holiday;
    cout<<"enter the holidays ";
    cin >> holiday;
    int wd;
    wd=365-holiday;
    int timeforgames;
    timeforgames=(wd*63)+(holiday*127);
    int diff,nom=30000;
    diff=nom-timeforgames;
    int hour=diff/60;
    int min=diff%60;
    if(timeforgames<=nom)
    {
        cout<<"tom sleeps well "<<endl;
        cout<<hour<<" hours and "<<min<<" minutes less for play ";
    }
    else {
        cout<<"tom will run away "<<endl;
        cout<<hour<<" hours and "<<min<<" minutes more for play ";
    }

    return 0;
}