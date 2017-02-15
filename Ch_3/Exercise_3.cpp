#include<iostream>
#include <cmath>
using namespace std;

int main()
{
  int degrees,minutes, seconds;
  double result;
  const int Conver_rate = 60;

  cout << "Enter latitude in degrees, minutes and seconds : \n";
  cout << "First, Enter degrees : " ;
  cin  >> degrees;
  cout << "\nNext, Enter minutes of arc : " ;
  cin  >> minutes;
  cout << "\n Finaaly enter the seconds of arc: ";
  cin  >> seconds;

  result = degrees + (minutes+ seconds/pow(Conver_rate,2))/Conver_rate  ;

  cout << result ;
return 0;
}
