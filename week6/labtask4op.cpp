#include<iostream>
using namespace std;
int main()
{
    
    int elements;
    string a;
    cout<<"Enter the number of elements ";
    cin >> elements;
    if(elements>0){
    cout<<"Enter the "<<elements<<" ,one per line "<<endl;
    for(int i=0;i<elements;i++)
    {
        cin >> a[i];
    }
     cout<<"Numbers in reverse order ";
    for(int j=elements-1 ; j>=0 ; j--)
    {
        cout<<a[j]<<"\t";
    }
}

else {
    cout<<"Invalid input. numbers of element should be greater than 0 ";
}
    
   
}