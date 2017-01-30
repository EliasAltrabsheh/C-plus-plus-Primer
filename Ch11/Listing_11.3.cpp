#include<iostream>
#include "Listing_11a.h"

int main()
{
  using std::cout;
  using std::endl;

  Time planning;
  Time coding(2,40);
  Time fixing(5,55);
  Time total;

  cout << "planning time = " << endl;
  planning.Show();
  cout << "coding time =" << endl;
  coding.Show();
  cout << "fixing time="<<endl;
  fixing.Show();
  cout << "coding.sum(fixing)" <<endl;
  total.Show();

  return 0;
}
