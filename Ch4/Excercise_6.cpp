/* program that shows the deatails of strct  candy bar example but with array of struct*/

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
  CandyBar snack[3] =
  {

  };
  cout << "What the name of the candy ? \n";
  cin >> snack[0].brand ;
  cout << "What the weight of the candy ? \n";
  cin >> snack[0].weight ;
  cout << "How many calaries has the candy have ? \n";
    cin >> snack[0].calories;
  cout << "The candy bar is called : " << snack[0].brand  << endl;
  cout << "The weight is :  " << snack[0].weight  << endl;
  cout << "The amount of calories are:  " << snack[0].calories  << endl;
}
