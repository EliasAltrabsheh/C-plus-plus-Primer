#include <iostream>
#include "Listing_11b.h"

int main()
{
  using std::cout;
  using std::endl;

  Time adjusted;
  Time total;
  Time diff;
  Time weeding(4,35);
  Time waxing(2,47);


  cout << "weeding time = ";
  weeding.Show();
  cout << endl;

  cout << "waxing time =" ;
  waxing.Show();
  cout << endl;

  cout << "total work time = ";
  total = weeding + waxing;
  total.Show();
  cout << endl;

  cout << "weeding - waxing ";
  diff.Show();
  cout << endl;

  adjusted = total * 1.5;
  cout << " adjusted work time ";
  adjusted.Show();
  cout <<endl;
  return 0;
}
