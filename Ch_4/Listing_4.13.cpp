/* This program will show us the use of struct with array assignment*/

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
  inflatable guests[2] =
  {
    {"bambi ", 0.5, 50.89}, // first structure file
    {"lizard ", 1.8, 67.55} // second structure file
  };

cout << "The guests " << guests[0].name << " and " << guests[1].name << "\n Have combined price of: " << guests[0].price + guests[1].price << " pounds";
return 0;
}
