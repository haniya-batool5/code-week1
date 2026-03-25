#include<iostream>
using namespace std;
int main()
{
    int element;
    char letter;
    int count=0;
    cout<<"Enter the number of customers : ";
    cin >> element;
    cout<<"Enter the names of "<<element<<" customers: "<<endl;
    string a[element];
    for(int i=0;i<element;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter a letter to check : ";
    cin >> letter;
    for(int j=0; j< element ;j++)
    {
        if(a[j][0] == letter)
        {
           count=count+1;
       
        }
    
    }
    cout<<"Total name starting with '"<<letter<<"' : "<<count;

}