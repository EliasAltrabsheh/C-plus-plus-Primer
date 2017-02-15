#include<iostream>
#include <cmath>
using namespace std;

int main()
{
  const int m_s_rate = 60;
  const int hours_day = 24;

  long input;
  long minutes = 0;
  long hours = 0;
  long days = 0;
  long seconds = 0;
  cout << " Please insert  number second for convertion: ";
  cin >> input;
  days = input / (hours_day * pow(m_s_rate, 2)) ;
  hours = input / pow(m_s_rate, 2);
  minutes = input / m_s_rate;
  seconds =input % m_s_rate;

  cout << "Days are  = "<< days << endl;
  cout << "Hours are =  " << hours % m_s_rate << endl;
  cout << "minutes are = " << minutes % m_s_rate<< endl;
  cout << "Seconds are = " << seconds % m_s_rate;
  return 0;
}
