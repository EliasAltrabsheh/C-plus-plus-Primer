/* look at function template example with creating your own type that can except any entry type of data*/

#include <iostream>

template <class Any> // or typename Any
void swap(Any &a, Any &b);

int main()
{

  int i = 10;
  int j = 20;

  std::cout << "i,j = " << i << ", " << j << ".\n";
  std::cout << "using compiler- genrated int swapper: \n";
  swap(i,j);
  std::cout <<"Now i ,j = " << i <<" , " << j << std::endl;


double x = 24.5;
double y = 81.9;

std::cout << "x,y = " << x << ", " << y << ".\n";
std::cout << "using compiler- genrated int swapper: \n";
swap(x,y);
std::cout << " Now x,y = " << x << " " << y << std::endl;

return 0;
}

template <class Any> // or typename Any
void swap(Any &a, Any &b)
{
  Any temp;
  temp = a;
  a = b;
  b = temp;
}

/*void swap(int &a,int &b)
{
  Any temp;
  temp = a;
  a = b;
  b = temp;
}

void swap(double &a,double &b)
{
  double temp;
  temp = a;
  a = b;
  b = temp;
}*/
