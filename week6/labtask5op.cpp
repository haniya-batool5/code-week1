#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the numbers you want to enter ";
    cin >> size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the number ";
        cin >> a[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<"The number you entered is "<<a[i]<<endl;
    }
}