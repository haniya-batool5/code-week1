#include <iostream>
using namespace std;

int main() {

    int n = 5;
   for(int a=1;a<=n;a++)
   {
    for(int b=1; b<=a;b++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   for(int a=n;a>=1;a--)
   {
    for(int b=1; b<=a;b++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   return 0;
}
