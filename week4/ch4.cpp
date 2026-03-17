#include<iostream>
using namespace std;
int main()
{    char a;
    cout<<"enter any character  ";
    cin >> a;
    if(a>='a'&& a<='z'){
        cout<<"the "<<a<<" is the lower case aplhabet";
    }
    else if ((a>='A'&& a<='Z')){
         cout<<"the "<<a<<" is the upper case aplhabet";
    }
    else{
        cout<<"the "<<a<<" is the number ";
    }

}