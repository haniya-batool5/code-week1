#include<iostream>
using namespace std;
int main()
{
    int money;
    int yearlive;
    cout<<"enter money ";
    cin>> money;
    cout<<"enter year ";
    cin >> yearlive;
    int age=18;
    for(int currentyear=1800; currentyear<=yearlive ; currentyear++)
    {
        if(currentyear%2==0)
        {
            money=money-12000;
        }
        else
        {
            money-=12000+50*(age);
        }
        age++;
    }
    if(money>=0)
    {
        cout<<"Yes! He will live a carefree life and will have "<<money<<" dollars left." ;
    }
    else{
        cout<<"NO! He will need  "<<-(money)<< " dollars to survive."; 
    }
}