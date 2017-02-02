/* In this excersise we are going  to write a program that request two integers then calclate sum of all integers between those two
foe an example 2 and 9 is 2+3+4+5+6+7+9=44 */

#include<iostream>

using namespace std;

int main()
{
  int first_dig , second_dig;
  int sum , sum_arth;

  cout << "Please insert first digit : " << endl;
  cin >> first_dig;
  cout << "Please insert second digit : " << endl;
  cin >> second_dig;
  sum = first_dig;
  sum_arth = (second_dig* (second_dig + 1))/2 - ( first_dig * (first_dig -1 ))/2 ; // arthmetic method i.e N_{b}(N_{b}+1)/2 - N_{a}(N_{a}-1)/2
for(int i = first_dig + 1; i <= second_dig; i++  )
{
  sum += i ;
  cout << sum << endl;
}
  cout << " (method loop)the sum is : " << sum << endl;

  cout << "(arthmatic method) the sum is " << sum_arth << endl;
return 0;
}
