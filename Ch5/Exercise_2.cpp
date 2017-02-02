/*write a program that users will ask for number and it will calclate untill user enters zero*/


#include<iostream>

using namespace std;

int main()
{
  int digit;
  int sum ;

do {
     cout << "Please insert digit : " << endl;
     cin >> digit;
     sum += digit;
   } while(digit !=0);

  cout << "you finaly entered zero. The sum of your digits are: \n " << sum << endl;
return 0;
}
