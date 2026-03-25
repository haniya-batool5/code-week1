#include<iostream>
using namespace std;
int main()
{
    string word;
    cout<<"Enter the string ";
    cin>>word;
    cout<<"Reversed string  ";
    for(int i=word.length() ; i>=0 ;i--)
    {
        cout<<word[i];
    }
}