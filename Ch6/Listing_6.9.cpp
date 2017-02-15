#include <iostream>
using namespace std;


int main()
{
  int a, b;
  cout << "Enter two integers : ";
  cin >> a >> b;
  cout << " the larger of " << a << " and " << b;
  int c = a > b ? a:b; // c = a if a >b, else c = b

  cout << "The value is " << c;
  return 0; 
}
