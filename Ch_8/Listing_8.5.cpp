/* sample to look at refrence propetries once passed in a function */

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
