#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter the string ";
    getline(cin,a);
    for(int i=0; a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            if(a[i]=='z')
            {
                a[i]='a';
            }
            else
            {
                a[i]=a[i]+1;
            }
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            if(a[i]=='Z')
            {
                a[i]='A';
            }
            else
            {
                a[i]=a[i]+1;
            }
        }
    }
    cout<<"Shifted string   "<<a;
}