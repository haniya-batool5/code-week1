#include<iostream>
using namespace std;
int main()
{
    int elements;
    int a[100];
    cout<<"Enter the size of an array ";
    cin >> elements;
    cout<<"Enter "<<elements<<" elements of array , one by one "<<endl;
    for(int i=0; i<elements ; i++)
    {
        cin >> a[i];
    }
    bool b=true;
    for(int i=0; i<elements ; i=i+2)
    {
        if(a[i]%2!=0)
        {
        b=false;
        }
        }
    if(b)
    {
        cout<<"special array ";
    }
    else{
        cout<<"the array is not special ";
    }
    
}
