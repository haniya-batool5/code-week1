#include <iostream>
using namespace std;
int x = 10;
void testFunction()
{
  int x = 20;
  cout << "Inside function (local x): " << x << endl;
}

int main()
{
  cout << "In main (global x): " << x << endl;
  testFunction();
  cout << "Back in main (global x): " << x << endl;

  return 0;
}