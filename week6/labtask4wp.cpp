#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int n[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the number ";
        cin >> n[i];
    }
    cout<<"The first element of an array is "<<n[0]<<endl;
    cout<<"The last element  of an array is "<<n[4]<<endl;


}