#include<iostream>
using namespace std;
int main()
{
int square,width,height,final;
cout<<"Number of square meters you can paint : ";
cin >> square;
cout<<"Width of single wall(in meter): ";
cin >> width;
cout<<"Height of the single wall(in meters): ";
cin >> height;
final=square/(width*height);
cout<<"numbers of walls you can paint: "<<final;
return 0;
}

