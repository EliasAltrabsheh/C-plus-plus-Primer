/* pointer function example */

/*.To implement this plan,you need to be able to do the following:
1) Obtain the address of a function.
2) Declare a pointer to a function.
3) Use a pointer to a function to invoke the function.
*/

#include<iostream>
double betsy(int); // declaration prototype that the type of pointer to int tyype pinting to double
double pam(int);
using namespace std;

void estimate(int lines, double(*pf)(int)); // pointer pf points to double type that takes int

int main()
{
  int code;

  cout << "how many lines of code do you need? " <<endl;
  cin >>code;
  cout << " here is betsy estimate" <<endl;
  estimate(code,betsy);
  cout << " here is pam estimate" <<endl;
  estimate(code,pam);
  return 0;
}

double betsy(int lns)
{
  return 0.05 * lns;
}

double pam(int lns)
{
  return 0.03 * lns;
}

void estimate(int lines, double(*pf)(int))
{
  cout << lines << "lines will take" ;
  cout << (*pf)(lines) << "hour(s)" <<endl;

}
