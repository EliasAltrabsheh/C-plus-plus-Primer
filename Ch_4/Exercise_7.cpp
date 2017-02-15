#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
  string name;
  int diameter;
  float weight;
};
int main()
{
char entry ;
bool data = true;
Pizza analyst[2] = {};
cout << " Hello Pizza analyst :) , Please Enter the following: \n";
  cout << " Pizza name : \n";
  cin >> analyst[0].name;

  cout << " Pizza diameter(inches): \n";
  cin >> analyst[0].diameter;

  cout << " Pizza weight(gm): \n";
  cin >> analyst[0].weight;

  cout << "Pizza data = "   <<  analyst[0].name << ", " << analyst[0].diameter << " Inches" << analyst[0].weight << " Grams\n";




  return 0;
}
