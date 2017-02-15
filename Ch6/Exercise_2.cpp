/* Program that reads upto 10 donation values into an array double */

#include<iostream>
#include<cctype>
#include<cstdlib> // support for exit

using namespace std;
int main()
{
  const int size = 10;

  int i = 0;
  double values[size], sum = 0 , average;

  for(i = 0; i < size; ++i)
     {
         cout << i + 1 << ". Enter number: ";
         cin >>  values[i];
         if (!isdigit(values[i]))
          {
            sum +=  values[i];
          }
       else
          {
            cout << " You entered a non numeric value";
            break;
          }

     }
     average = sum / size;
  return 0;
}
