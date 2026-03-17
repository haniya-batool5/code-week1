#include<iostream>
using namespace std;
int main()
{
    string word1,word2;
    cout<<"enter the first word";
    cin >> word1;
    cout<<"enter the second word";
    cin >> word2;
    if(word1==word2)
    {
        cout<<"the words are same";
    }
    else
    {
        cout<<"the words are different";
    }
    return 0;
}