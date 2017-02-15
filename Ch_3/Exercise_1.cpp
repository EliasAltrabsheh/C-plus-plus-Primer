// numeric_limits example
#include <iostream>     // std::cout

using namespace std;

void convert(int x)
{
  const int factor =  12;
  int feet , inches;
  float feetf;

  feet = x/factor;
  inches = x % factor;
  feetf = (float)x/factor;
  cout << "The height in feet is " << feet << "\'" << inches << "\" " << endl;
  cout << "The height in feet(float) is " << feetf << endl;
}

int main ()
 {
   int inches_Input;
cout << "Enter height in Inches: "<< endl;
cin >> inches_Input;
convert(inches_Input);

  return 0;
}
