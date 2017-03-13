/* sample to look at refrence propetries once passed in a function
Use const When You Can There are three strong reasons to declare reference arguments as references to constant data:

1) Using const protects you against programming errors that inadvertently alter data.
2) Using const allows a function to process both const and non-const actual arguments, whereas a function that omits const in the prototype only can accept nonconst data.
3) Using a const reference allows the function to generate and use a temporary variable appropriately.


*/

#include<iostream>

double cube(double a);
double refcube(double &ra);

using namespace std;

int main()
{
  double x = 3;

  cout << cube(x);
  cout << " = cube of " << x << endl;
  cout << refcube(x);
  cout << " = cube of " << x << endl;
  return 0;
}

double cube(double a)
{
  a*= a * a;
  return a;
}

double refcube(double &ra)
{
  ra*= ra * ra;
  return ra;
}
