#include<iostream>
using namespace std;
int main()
{
    int a,b, choice;
  while(true)
  {
    cout<<"---SIMPLE CALCULATOR---"<<endl;
    cout<<"1. ADDITION \n";
    cout<<"2. SUBTRACTION \n";
    cout<<"3. MULTIPLICATION \n";
    cout<<"4. DIVISION \n";
    cout<<"5. CLEAR SCREEN \n";
    cout<<"6. EXIT\n";
    cout<<"Enter the choice(1-6) ";
    cin >> choice;
    if(choice==1)
    {
        cout<<"enter the first number ";
        cin >> a;
        cout<<"enter the second number ";
        cin >> b;
        cout<<"Result "<<a+b<<endl;
    }
    else if(choice==2)
    {
        cout<<"enter the first number ";
        cin >> a;
        cout<<"enter the second number ";
        cin >> b;
        cout<<"Result "<<a-b<<endl;
    }
    else if(choice==3)
    {
        cout<<"enter the first number ";
        cin >> a;
        cout<<"enter the second number ";
        cin >> b;
        cout<<"Result "<<a*b<<endl;
    }
    else if(choice==4)
    {
        cout<<"enter the first number ";
        cin >> a;
        cout<<"enter the second number ";
        cin >> b;
        cout<<"Result "<<a/b<<endl;
    }
    else if(choice==5)
    {
        system("cls");
    }
    else if(choice==6)
    {
        cout<<"EXIT "<<endl;
        break;
    }
    else
    {
        cout<<"enter the valid choice from 1 to 6 \n ";
    }


  }
}