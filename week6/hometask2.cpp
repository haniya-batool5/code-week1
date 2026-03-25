#include<iostream>
using namespace std;
int main()
{
    int element;
    cout<<"Enter the number of elements : ";
    cin >> element;
    cout<<"Enter "<<element<<" numbers: "<<endl;
    int a[element];
    int count=0;
    for(int i=0; i<element ; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            count=count+1;
        }
    }
    cout<<"Total even numbers "<<count;
}