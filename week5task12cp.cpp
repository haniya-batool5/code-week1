#include<iostream>
using namespace std;
int main()
{
    int choice;
    string book="";
      while(true)
    {
        cout<<"---LIBRARY SYSTEM ---"<<endl;
        cout<<"1. ADD BOOK\n";
        cout<<"2. VIEW BOOK\n";
        cout<<"3. BORROW BOOK\n";
        cout<<"4. ISSUE BOOK \n";
        cout<<"5. EXIT\n";
        cout<<"enter the choice(1-5)";
        cin >> choice;
        if(choice==1)
        {
            cout<<"enter the book name ";
            cin >> book;
            cout<<"you added that book  "<<book<<endl;
        }
        else if(choice==2)
        {
            cout<<"Enter the book name you want to viewed";
            cin >> book;
            cout<<"you viewed that book "<<book<<endl;
        }
        else if(choice==3)
        {
            cout<<"enter the book you want to borrowed ";
            cin >> book;
            cout<<"you borrowed "<<book<<" that book "<<endl;
        }
        else if(choice==4)
        {
            cout<<"enter the book you want to issued ";
            cin >> book;
            cout<<"you issued that book "<<book<<endl;
        }
        else if(choice==5)
        {
            cout<<"existing library system . Goodbye!"<<endl;
            break;
        }
        else
        {
            cout<<"enter the valid choice from 1 to 5 "<<endl;
        }


    }
}