#include <iostream>
using namespace std;
bool checkingcase(char ch);
int main()
{
    char ch;
    bool result;
    cout<<"Enter a character (A/a) ";
    cin >> ch;
    result=checkingcase(ch);
    if(result)
    {
        cout<<"You have entered capital "<<ch<<endl;
    }
    else
    {
        cout<<"You have entered small "<<ch<<endl;
    }
}
bool checkingcase(char ch)
{
    bool found = true;
    if(ch=='a')
    {
      found=false;
    }
    if(ch=='A')
    {
        found=true;
    }
    return found;

}