#include<iostream>
using namespace std;
int main()
{
    int choice;
    while(true)
    {
        cout<<"-----RESTURANT MANGEMENT SYSTEM-----"<<endl;
        cout<<"1. View Food Menu"<<endl;
        cout<<"2. Place Order"<<endl;
        cout<<"3. View Order Status "<<endl;
        cout<<"4. Generate Bill "<<endl;
        cout<<"5. Contact Staff"<<endl;
        cout<<"6. Exit  "<<endl;
        cout<<"enter your choice ";
        cin>> choice;
        if(choice==1)
        {
            cout<<"You selected: View Food Menu "<<endl;
        }
        else if(choice==2)
        {
            cout<<"You selected: Place Order \n";
        }
        else if(choice==3)
        {
            cout<<"You selected:View Order Status\n";
        }
        else if(choice==4)
        {
            cout<<"You selected:View Generate Bill\n";
        }
        else if(choice==5)
        {
            cout<<"You selected:Contact Staff\n";
        }
        else if(choice==6)
        {
            cout<<"You EXIT \n";
            break;
        }
        else{
            cout<<"enter the valid choice\n";
        }

    }
}