/* this program reads your name , last name in one line and grade s and age*/

#include <iostream>

using namespace std;

int main()
{
  int size = 20;
  char name[size];
  int age;
  char grade;

  cout << "What is your first name ?\n";
  cin.get(name,size).get();
  cout << "Enter your grade?\n";
  cin >> grade;
  cout << "Enter your age ?\n";
  cin >> age;
  cout << "\nYour name is  " << name << ", you age is  " << age << " and you grade is " << grade << endl;


  return 0;
}
