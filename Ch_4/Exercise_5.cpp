/* program that shows the deatails of strct */

#include<iostream>

using namespace std;

struct CandyBar
{
  char brand[20];
  float weight;
  int calories;
}; //end of structure

int main()
{
  CandyBar snack =
  {"mocha munch",
    2.3,
    350
  };

  cout << "The candy bar is called : " << snack.brand  << endl;
  cout << "The weight is :  " << snack.weight  << endl;
  cout << "The amount of calories are:  " << snack.calories  << endl;
}
