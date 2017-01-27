/* this program looks at the structurer terms to hold more than one data type of sevral members*/

#include <iostream>
using namespace std;
struct inflatable // struct decleration
{
  char name[20];
  float volume;
  double price;
};

int main()
{
  inflatable guest =
  {
    " Elias Altrabsheh",
    1.99, // volume
    29.99 // price
  }; // guest is strcture of type inflatable

  inflatable mate =
  {
    " Adam watson ",
    6.99, // volume
    99.99 // price
  }; // mate is strcture of type inflatable
  cout << "Expand your guest list with " << guest.name;
  cout << " and " << mate.name << endl;
  cout << "you can have both for : £";
  cout << guest.price + mate.price << endl;
  return 0;
}
