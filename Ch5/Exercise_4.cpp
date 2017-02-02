#include <iostream>
#include <string>

using namespace std;



int main()
{
  int size = 12;
  string months[size] = {"Jan", "Feb", "Mar", "Apr", "May",
                      "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int sales = 0;
   int sum = 0;

  for(int i = 0; i < size; i++)
  {
    cout << " Enter nummber of sales for " << months[i] << ": \n";
    cin >> sales;

    sum += sales;
  }
cout << "Number of sales for this year is " << sum;
  return 0;
}
