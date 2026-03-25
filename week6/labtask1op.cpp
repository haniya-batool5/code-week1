#include<iostream>
using namespace std;
 int  main()
{
    string word ;
    cout<<"Enter the word ";
    cin >> word;
    for(int index=0 ; index<word.length(); index++)
    {
        cout<<word[index]<<" found at position "<<index<<endl;
    }
}