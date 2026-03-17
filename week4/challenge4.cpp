#include<iostream>
using namespace std;
int main()
{
    string userpassword,mypassword;
    mypassword="password1234";
    cout<<"enter your password";
    cin >> userpassword;
    if(mypassword==userpassword)
    {
        cout<<"i cracked your password";
    }
    else 
    {
        cout<<"opps! let's try again ";
    }
    return 0;
}