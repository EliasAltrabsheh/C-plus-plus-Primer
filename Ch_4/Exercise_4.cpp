#include<iostream>
#include <string>
using namespace std;

int main()
{
  string first_name;
  string last_name;
  string full_name;

  cout << "Enter your first name : \n" ;
  cin >> first_name;
  cout << "Enter your last name : \n";
  cin >> last_name;

  full_name = last_name + ", " + first_name;
  cout << "Here is your information in one line : " << full_name;

return 0;
}
