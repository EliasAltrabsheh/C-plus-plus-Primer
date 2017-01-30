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
      cout << "\b";
        if (islower(ch))

          cout << isupper(ch);
        else if (isupper(ch))
          cout << islower(ch);
    cin.get(ch);
  }

  return 0;
}
