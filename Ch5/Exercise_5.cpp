#include <iostream>
#include <string>

using namespace std;



int main()
{
  int size = 12;
  int years = 4;
  const  char  * months [years][size] = {{ "Jan", "Feb", "Mar", "Apr", "May","Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" },
                            { "Jan", "Feb", "Mar", "Apr", "May","Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" },
                            { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}
                          };

  int sales = 0;
  int sum = 0;
  int total_sum = 0;

for (int j = 1; j < 4 ; j++)
{
  for(int i = 0; i < size; i++)
  {
    cout << " Enter nummber of sales for " << months[j][i] << ": \n";
    cin >> sales;

    sum += sales;
  }
cout << "Number of sales for year# " << j << " = " << sum;
total_sum += sum;
sum = 0;
}
cout << "total sales for all years is : " << total_sum;
  return 0;
}
