/*This is a rewritting listing of 4.4 using strings*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
  string name;
  string dessert;

  cout << "Enter your Name : \n";
  getline(cin, name); // string cin will stop reading at \0 or space so we use get line with cin as argument 

  cout << " Enter your favorite dessert: \n";

  cin >> dessert;

  cout << " I have some delicious  " << dessert;

  cout << " for you , " << name << ".\n";

  return 0 ;


}
