/* program example to look at refrence value to certain variable which ats as an alias. */

#include<iostream>
using namespace std;

int main()
{
  int rats = 101;
  int & rodants = rats; // rodants is refrence

  cout << "rats = " << rats <<endl;
  cout << " rodants = " << rodants << endl;


  cout << "rats adress = " << &rats <<endl;
  cout << " rodants adress = " << &rodants << endl;

  int bunnies = 50;
  rodants = bunnies; // lets see if we can change adress

  cout << "bunnies = " << bunnies <<endl;
  cout << " rodants = " << rodants << endl;

  cout << "bunnies adress = " << &bunnies <<endl;
  cout << " rodants adress = " << &rodants << endl;
return 0;
}
