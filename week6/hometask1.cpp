#include<iostream>
using namespace std;
int main()
{
    int elements;
    cout<<"Enter number of element : ";
    cin >> elements;
    cout<<"Enter "<<elements<<" numbers "<<endl;
     int a[elements];
    int sum=0;
    for(int i=0;i<elements;i++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }
    cout<<"Sum of all elements : "<<sum;
}