/* First example of an inline function and how its defined*/

#include<iostream>
using namespace std;
inline double square(double x)
{return x * x;}

int main()
{
  double a,b;
  double c = 13.0;

  a = square(5.0);
  b = square(4.5 + 7.5); // passes expression

  cout << "a = " << a << ", b = " << b <<endl;
  cout << " c = " << c << endl;
  cout << " c squared = " << square(c++) << endl;
  cout << " Now c = " << c << endl;
  return 0;
}
/* With the inline function the pass can automaitcally cast value of aurgement to double before passing it to function.

Macro can be used but the problem is that macros dont pass value before oparating*/
