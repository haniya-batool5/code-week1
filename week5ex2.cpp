#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the positive number ";
    cin>>n;
    while(n<=0)
    {
        cout<<"error "<<n<<" is not a positive number "<<endl;
        cout<<"enter the positive number ";
        cin >> n;
    }
    cout<<"program ends";
}
