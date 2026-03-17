#include<iostream>
using namespace std;
int main()
{
    char going;
    cout<<"Are your friend going? (press y for yes and n for no)";
    cin >> going;
    if(going=='y'){
        cout<<"you are also going ";
    }
    else{
        cout<<"you are not going";
    }
}