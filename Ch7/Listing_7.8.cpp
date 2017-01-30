/* Function with array range */

#include <iostream>

const int Arsize = 8;

int sum_arr(const int * begin, const int * end); //prototype
using namespace std;
int main()
{
  int cookies[Arsize] = {1,2,4,8,16,32,64,128};

  int sum = sum_arr(cookies, cookies + Arsize);
  cout << "Total cookies eaten: " << sum << "\n";
   sum = sum_arr(cookies, cookies + 3);
  cout << "First three eateres aten: " << sum << "\n";
  sum = sum_arr(cookies+ 4, cookies + 8);
  cout << "last four eateres aten: " << sum << "\n";

  return 0;
}

int sum_arr(const int * begin, const int * end)
{
  const int * pt;
  int total = 0;
  for(pt = begin; pt!= end; pt++)
  {
    total += *pt;
  }
return total;
}
