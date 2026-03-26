#include<iostream>
using namespace std;
int main()
{
    int element;
    cout<<"Enter number of students : ";
    cin >> element;
    string name[element] ;
    cout<<"Enter names of "<<element<<" students : "<<endl;
    for(int i=0 ; i < element ; i++)
    {
        cin >> name[i];
    }
    for(int i=0;i<element;i++)
        for(int j=i+1; j< element ; j++)
        {
            string alpha;
         if(name[i]>name[j])
         {
            alpha=name[i];
            name[i]=name[j];
            name[j]=alpha;
         }
        }
        cout<<"In  ascending alphabetical name are  "<<endl;
    for(int i=0 ; i< element ; i++)
    {
        cout<< name[i]<<endl;
    }
{
    for(int i=0 ;i<element ; i++)
        for(int j=i+1; j<element ; j++)
        {
            string alpha;
         if(name[i]<name[j])
         {
            alpha=name[i];
            name[i]=name[j];
            name[j]=alpha;
         }
        }
        cout<<"In descending alphabetical name are "<<endl;
    for(int i=0 ; i< element ; i++)
    {
        cout<< name[i]<<endl;
    }
}
}