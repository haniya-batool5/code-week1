#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter the type of figure that you want calculation on ";
    cin >> name;
    if(name=="square"||name=="Square"||name=="SQUARE")
    {
        int side;
        cout<<"enter side ";
        cin >> side;
        cout<<"the value is "<<side*side;
    }
   else if(name=="rectangle"|| name=="Rectangle"|| name=="RECTANGLE")
    {
        float l,w;
        cout<<"enter the length ";
        cin >> l;
        cout<<"enter the width ";
        cin >> w;
        cout<<"the value is "<<l*w;
    }
    else if (name=="circle"|| name=="CIRCLE"|| name=="Circle")
    {
        float pi=3.14,r;
        cout<<"enter the radius ";
        cin >> r;
        cout<<"the value is "<<pi*r*r;
    }
    else if (name=="triangle"|| name=="Triangle"||name=="TRIANGLE")
    {
        float b,h;
        cout<<"enter the breadth ";
        cin >> b;
        cout<<"enter the height ";
        cin >> h;
        cout<<"the value is "<<0.5*b*h;
    }
    else{
        cout<<"enter the valod figure i.e square,circle,rectangle or triangle";
    }
}