/* Program that reads upto 10 donation values into an array double */

#include<iostream>
#include<cctype>
#include<cstdlib> // support for exit

using namespace std;
int main()
{
  const int size = 10;
  double values[size];

  for(int i = 0; i < size; i++)
  {
    cout << "Please enter a digit: "<< endl;
    cin >> values[i];

    if(isdigit(values[i]))
        cout << "Please enter a digit: "<< endl;
    else
      cout << "Program terminate";
      exit(EXIT_FAILURE); // exit command of cstdlib

  }

  return 0;
}
