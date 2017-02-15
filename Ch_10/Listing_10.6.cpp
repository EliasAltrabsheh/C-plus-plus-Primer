#include <iostream>
#include "stock.h" // also known as string.h which is a header that has various function for manipulating strings


int main()
{
  using std::cout;
  using std::ios_base;
  cout.precision(2);
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout.setf(ios_base::showpoint);

  cout  << "using constructers to create new objects\n";
  Stock stock1 = Stock("NanoSmart", 12, 20.0);
  stock1.show();
  Stock stock2 = Stock ("Boffo Objects", 2, 2.0);
  stock2.show();

  cout  << "Assigning Stock 2 :\n";
  stock2 = stock1;
  cout  << "listing stock1 and stock2 :\n";
  stock1.show();
  stock2.show();

  cout  << "using a constructer to reset an object  :\n";
  stock1 = Stock("nifty Foods", 10, 50.0); // temp object
  cout << "Revised stock1:\n";
  stock1.show();
  cout << "Done\n";
  return 0;

}
