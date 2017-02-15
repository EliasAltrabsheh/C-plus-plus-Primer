/* Program that reads key boards that echoes input  the input apart from digits converting upper to lower and vice versa*/

#include<iostream>
#include<cctype>
using namespace std;
int main()
{

  cout << "Enter text for anaylysis and type @ to terminate " << endl;

  char ch;


  cin.get(ch); // get first character

  while(ch != '@')
  {
    if(isalpha(ch)) // is it an alphabtic character
      {
        cout << "\a";
        if (islower(ch))
          cout << toupper(ch) << endl;
        else if (isupper(ch))
          cout << tolower(ch) << endl;
      }
    cin.get(ch);
  }

  return 0;
}
