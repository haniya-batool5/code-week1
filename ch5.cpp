#include<iostream>
using namespace std;
int main()
{
    string n1,n2,n3;
    int a1,a2,a3;
    cout<<"enter the first brother name ";
    cin >> n1;
    cout<<"enter the first brother age ";
    cin >> a1;
    cout<<"enter the second brother name ";
    cin >> n2;
    cout<<"enter the second brother age ";
    cin >> a2;
    cout<<"enter the third brother name ";
    cin >> n3;
    cout<<"enter the third brother age ";
    cin >> a3;
    if (a1<a2&&a1<a3){
        cout<<n1<<" is the youngest";
    }
    else if (a2<a1&&a2<a3){
        cout<<n2<<" is the youngest";
    }
    else if (a3<a2&&a3<a1){
        cout<<n3<<" is the youngest";
    }
}