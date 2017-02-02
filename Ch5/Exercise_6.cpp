/* program with structures using strings `*/

#include<iostream>
#include<string>

using namespace std;

struct car
{
  string make;
  int year;
};

int main()
{
 int items;

 cout << " How Many cars do you wish to catalog? " << endl;
 cin >> items;
  car catalog[items] =
  {};

  for(int i = 1; i < items; i++)
  {
    cout << "car# " << i <<": " << endl;
    cout << "please enter make of car: " << endl;
    cin >> catalog[i].make;

    cout << "please enter year of production: " << endl;
    cin >> catalog[i].year;
  }
cout << " here is your collection: " << endl;

 for (int j = 1; j < items; j++)
  {
    cout << catalog[j].year  << catalog[j].make << endl;
  }

return 0;

}
