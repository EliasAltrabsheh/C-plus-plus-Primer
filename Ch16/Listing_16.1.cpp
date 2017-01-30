/* Example of an introduction to stinrg class */

#include <iostream>
#include <string>

using namespace std;
int main()
{
  string one("Lottery winner!!!");
  cout << one << endl;  // over load <<

  string two(20,'$');
  cout << two <<endl;

  string three(one);
  cout << three << endl;

  one +="opps!";
  cout << one << endl;

  two = "sorry ! that was ";
  three[0] = 'p';

  string four;
  four = three + two;
  cout << four << endl;

  char alls[] = "All's well that ends well";
  string five(alls,20);
  cout << five << "!\n";

  string six(alls + 6, alls + 10); // range of array from 6th to 10 th character
  cout << six <<" , ";
  string seven(&five[6], &five[10]); // range of array but by point of refrence
  cout << seven << " ...\n";

  return 0;

}
