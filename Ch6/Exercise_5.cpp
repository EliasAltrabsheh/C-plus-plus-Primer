/* Program to work out tax system for bitcoin earnings */

#include<iostream>
#include<cctype>

using namespace std;

int main()
{
  double interest;
  int salary;

  cout << "Please Enter your salary in bitcoin: " << endl;


  while(!(cin >> salary) || salary < 0 )
  {
    cin.clear(); // reset input
    while(cin.get() != '\n')
      continue;
    cout << " Please enter a postive salary !! We dont do debt" << endl;
  }

    
return 0;
}
