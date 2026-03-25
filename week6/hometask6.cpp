#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int element;
    cout<<"Enter number of students : ";
    cin >> element;
    string name[element];
    char count1='a';
    char  count2='A';
    cout<<"Enter names of "<<element<<" students : ";
    for(int i=0 ; i< element ; i++)
    {
        cin >> name[i];
    }
    sort(name , name + element );
    for(int i=0 ; i< element ; i++)
    {
        cout<< name[i]<<endl;
    }
}