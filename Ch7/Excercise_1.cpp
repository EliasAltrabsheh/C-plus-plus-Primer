/* program to calcalute harmonic mean */

#include<iostream>

using namespace std;

double calculate(int x, int y); // prototype

int main()
{
  const int size = 2;
  int num1,num2;
  do{
  cout << " Please enter Pairs of numbers (if any number is zero the program will stop): " << endl;
  cin >> num1;
  cin >> num2;
  cout << " the harmonic mean is : " << calculate(num1,num2) << endl;
}while(num1!= 0 || num2!= 0  );
  
  return 0;
}

double calculate(int x, int y)
{
  double mean = 0;
  mean = (2 * x * y )/( x + y );
  return mean;
}
