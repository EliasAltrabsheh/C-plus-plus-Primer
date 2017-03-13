/* Program that reads upto 10 donation values into an array double */

#include<iostream>
#include<cctype>
#include<cstdlib> // support for exit

using namespace std;
int main()
{

  char value ;

  cout << "please enter one of the the following choices :\n" << " c) Carivor \t"  << "p)pianist\n" << "t)tree\t" << "g) game\n";


cout << "please enter the character c, p, t or g :\n ";
cin.ignore(100,'\n');
cin >> value;
while(value != 'g' && value != 'c' && value != 'p' && value != 't' )
{
  cout << "please enter the character c, p, t or g :\n ";
  cin >> value;
switch (value)
 {
  case 'c' : cout << "Canivour is a meat eater\n ";
             break;
  case 'p' : cout << "pianist is a musicion \n";
             break;
  case 't' : cout << "tree is a plant \n ";
             break;
  case 'g' : cout << "game is not real\n ";
             break;
 }

}
 return 0;

}
