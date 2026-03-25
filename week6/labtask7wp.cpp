#include<iostream>
using namespace std;
int main()
{
    string a;
    char letter;
    
    cout<<"Enter the word ";
    getline(cin,a);
    // cin >> a;
    cout<<"Enter the letter ";
    cin >> letter;
    bool found=false;
    for(int index=0; index<a.length() ; index++)
    {
        if(a[index]==letter)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<letter<<" is found in "<<a<<endl;
    }
    else
    {
        cout<<letter<<" is not found in "<<a<<endl;
    }
}