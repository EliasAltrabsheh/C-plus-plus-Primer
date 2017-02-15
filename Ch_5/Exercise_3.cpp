/* Program to work out compound intreset*/
#include<iostream>

using namespace std;

int main()
{
  int amount ;
  int years = 0;
  float intrest_s,intrest_c;
  cout << "Please enter Amount of investment :  " << endl;
  cin >> amount;
  cout << "Please enter intreset rate for simple method as example (10% = 0.1):  " << endl;
  cin >> intrest_s;
  cout << "Please enter intreset rate for compound method as example (5% = 0.05):  " << endl;
  cin >> intrest_c;
 float total_c = amount;
 float total_s = amount + 1;

  while( total_c < total_s )
  {
    ++years;
    total_c += (total_c * intrest_c); cout << " compound is : "<<total_c << endl;
    total_s = amount + (amount * years * intrest_s); cout << "simple is : "<<total_s << endl;

  }


  cout << " Number of years to excede is : " << years << endl;
  return 0;
}
