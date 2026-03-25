#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter a string ";
    getline(cin,a);
    for(int i=0; i< a.length() ; i++)
    {
        char b= a[i];
        if(b!='a'&& b!='A'&& b!='e'&& b!='E' && b!='i' &&b!='I' &&b!='o'&&b!='O'&&b!='u'&&b!='U') 
        {
            cout<< b;
        }
        
    }

}