#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int ele1;
    cout<<"Enter the number of elements for first array (must be 2) ";
    cin >> ele1;
    for(int i=0;i<ele1;i++)
    {
        cin >>a[i];
    }
    int b[100];
    int ele2;
    cout<<"Enter the number of elements for second  array ";
    cin >> ele2;
     for(int i=0;i<ele2;i++)
    {
        cin >>b[i];
    }
    cout<<"Resulting array: ["<<a[0]<<" , ";
    for(int j=0; j<ele2;j++)
    {
        cout<<b[j]<<" , ";
    }
    cout<<a[1]<<" ] ";

    

}