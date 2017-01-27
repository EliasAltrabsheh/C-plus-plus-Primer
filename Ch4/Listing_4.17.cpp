/* This program, shows the allocation of new memory */

#include <iostream>

int main()
{
  using namespace std;
  int * pt = new int; // allocate space for an int
  *pt = 1001; //store value there

  cout << " int ";
  cout << "value = " << *pt <<": location = " << pt << endl;

  double * pd = new double ; // allocation space for a double
  *pd = 100000001.0; // store double there

  cout << "double ";
  cout << "value = " << *pd <<": location = "<< pd << endl;
  cout << " size of pt = " << sizeof(pt);
  cout << " size of *pt = " << sizeof(*pt);

  cout << " size of pd = " << sizeof(pd);
  cout << " size of *pd = " << sizeof(*pd);
  return 0;
}
