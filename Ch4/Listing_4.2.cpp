// program that will introduce strings

#include<iostream>
#include <cstring>
using namespace std;

int main()
{
  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++owboy"; // initialized array

  cout << "Howdy! Im " << name2;
  cout << "What is your name ??\n ";
  cin >> name1;
  cout << "Well , " << name1 << " , your name has : \n";
  cout <<strlen(name1) <<" letters and is stored \n";
  cout << " in a array of " << sizeof(name1) << " bytes \n";
  cout << "Your initails are " << name1[0] << " .\n";
  name2[3] = '\0';
  cout << " Here are the first 3 characters of my name: ";
  cout << name2 << endl;
  return 0;
}
