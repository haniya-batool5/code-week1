#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of product : ";
    cin >> n;
    string product_name[n]={};
    float price[n]={};
    float quantity[n]={};
    for(int i=0 ; i< n ;i++)
    {
        cout<<"Enter the name of product: "<<i+1;
        cin >>product_name[i];
        cout<<"Enter price of "<<product_name[i]<<" : $" ;
        cin >> price[i];
        cout<<"Enter the quantity of "<<product_name[i]<<" : ";
        cin>>quantity[i];
    }
    cout<<"Product inventory Report "<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=0 ; i< n ; i++)
    {
     cout<<product_name[i]<<" : "<<" $"<<price[i]<<", "<<quantity[i]<<" in stock, total value: $"<<price[i]*quantity[i]<<endl;
    }

}