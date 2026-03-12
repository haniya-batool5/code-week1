#include<iostream>
using namespace std;
int main()
{    char x;
    cout<<"enter any character  ";
    cin >> x;
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'){
        cout<<"the "<<x<<" is the vowel";
    }
    else if (x>=1&&x<=10){
         cout<<"the "<<x<<" is the number";
    }
    else{
        cout<<"the "<<x<<" is the consonant ";
    }

}