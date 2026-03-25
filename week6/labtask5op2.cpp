#include<iostream>
using namespace std;
int main()
{
    int elements;
    string a;
    cout<<"Enter the number of elements ";
    cin >> elements;
    cout<<"Enter the "<<elements<<" numbers, one per line "<<endl;
    for(int i=0; i<elements ; i++)
    {
        cin >> a[i]; 
        bool d=false;
        if(a[i]==a[i-1])
        {
            cout<<"Already entered "<<a[i]<<endl;
            d=true;
        }
    }
    cout<<"Unique values ";
    for(int j=0 ;j<elements;j++)
    {
        bool d=false;
        if(a[j]==a[j-1])
        {
           d=true;
        }
        
         if(!d)
{
       cout<<a[j]<<" ";
}
}
}