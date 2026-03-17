#include<iostream>
using namespace std;
 main()
{
    string username,password;
    string name="";
    string course="";
    int age=0;
    int choice;
    for(int n=1;n<=3;n++)
    {
        cout<<"enter the username ";
        cin >> username;
        cout<<"enter the password ";
        cin >> password;
        if(username=="admin" && password=="1234")
        {
            cout<<"LOGIN SUCCESSFUL "<<endl;
            break;
        }
        else{
            cout<<"LOGIN FAILED"<<endl;
        }
        if(n== 3 && username!="admin" && password!="1234")
        {
            cout<<"too many attempt. program ends "<<endl;
        }
    }
    for(int i=1; i<=5 ; i++)
    {
        cout<<endl<<"--------university manangement system---------"<<endl;
        cout<<"1. ADD STUDENT "<<endl;
        cout<<"2. VIEW STUDENT"<<endl;
        cout<<"3. ADD COURSE  "<<endl;
        cout<<"4. EXIT "<<endl;
    
    cout<<"enter the choice ";
    cin >> choice;
    if(choice==1)
    {
        cout<<"enter student name ";
        cin >> name;
        cout<<"enter the student age ";
        cin >> age;
        cout<<"student added successfully ";
    }
    else if(choice==2)
    {
        if(name!="")
        {
            cout<<"student name "<<name<<endl;
            cout<<"student age "<<age<<endl;
        }
        else
        {
            cout<<"no record found "<<endl;
        }
    }
    else if(choice==3)
    {
        cout<<"enter the course name ";
        cin >> course;
        cout<<"course added successfully "<<endl;
    }
    else if(choice==4)
    {
        cout<<"program ends "<<endl;
        break;
    }
    else{
        cout<<"invalid choice "<<endl;
    }
}
}