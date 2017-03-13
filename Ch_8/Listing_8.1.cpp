/* First example of an inline function and how its defined
Inline functions are a C++ enhancement designed to speed up programs.
The primary distinction between normal functions and inline functions is not in how you code them but in how the C++ compiler incorporates them into a program.
To understand the distinction between inline functions and normal functions,you need to peer more deeply into a program’s innards than we have so far.Let’s do that now.

C++ inline functions provide an alternative.In an inline function,the compiled code is “in line”with the other code in the program.
That is,the compiler replaces the function call with the corresponding function code.With inline code,the program doesn’t have to jump to another location to execute the code and then jump back.
Inline functions thus run a little faster than regular functions,but they come with a memory penalty.
If a program calls an inline function at ten separate locations,then the program winds up with ten copies of the function inserted into the code (see Figure 8.1).


 You should be selective about using inline functions.
If the time needed to execute the function code is long compared to the time needed to handle the function call mechanism,
then the time saved is a relatively small portion of the entire process.If the code execution time is short,then an inline call can save a large portion of the time used by the non-inline call.
On the other hand,you are now saving a large portion of a relatively quick process,so the absolute time savings may not be that great unless the function is called frequently.
*/

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
