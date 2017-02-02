#include <iostream>
#include<cmath>
using namespace std;


int main()
{
  const int foot_inches_factor = 12;
  const double inch_meter_factor = 0.0254;
  const double pound_kilo_factor = 2.2;
  double height;
  double weight;
  double bmi;
  double hight_m = 0;


  cout << " please Insert your height in the form of in feet and inches (feet.inches):  " << endl;
  cin >> height;
  hight_m = ((height * foot_inches_factor) * inch_meter_factor);
  cout << " please insert your weight in pounds : " << endl;
  cin >> weight;
  bmi = (weight / pound_kilo_factor)/pow(hight_m,2);

  cout << "Your BMI is = " << bmi<< endl;

  return 0;
}
