#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of flights : ";
    cin >> n;
    string flight_num[n]={};
    string destination[n]={};
    float seats[n]={};
    cout<<endl;
    for(int i=0 ; i< n ;i++)
    {
        cout<<"Enter the flight number for flight "<<i+1<<" : ";
        cin >>flight_num[i];
        cout<<"Enter the destination for flight "<<flight_num[i]<<": " ;
        cin >> destination[i];
        cout<<"Enter the seats available for flight "<<flight_num[i]<<" : ";
        cin>>seats[i];
        cout<<endl;
    }
    cout<<"\nFLIGHT INFORMATION  "<<endl;
    cout<<"--------------------"<<endl;
    for(int i=0 ; i< n ; i++)
    {
     cout<<"Flight "<<flight_num[i]<<" to "<<destination[i]<<" has "<<seats[i]<<" seats available "<<endl;
    }
    cout<<"\nFlight with less than 5 seats available:"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0 ; i<n; i++)
    {
        if(seats[i] < 5)
        {
          cout<<"Flight "<<flight_num[i]<<" to "<<destination[i]<<" has only "<<seats[i]<<" seats left! "<<endl;  
        }
        else
        {
            cout<<"No flights with less than 5 seats available "<<endl;
        }
    }

}