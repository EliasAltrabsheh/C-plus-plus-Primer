/* program that uses cctype functions */

#include<iostream>
#include<cctype>
using namespace std;
int main()
{

  cout << "Enter text for anaylysis and type @ to terminate " << endl;

  char ch;
  int whitespace = 0;
  int digits = 0;
  int chars = 0;
  int punct = 0;
  int others = 0;

  cin.get(ch); // get first character

  while(ch != '@')
  {
    if(isalpha(ch)) // is it an alphabtic character
      chars++;
    else if(isspace(ch))
      whitespace++;
    else if(isdigit(ch))
      digits++;
    else if(ispunct(ch))
      punct++;
    else
        others++;

    cin.get(ch);
  }
  cout << " letters: " << chars << endl;
  cout << " whitespaces: " << whitespace << endl;
  cout << " digits: " << digits << endl;
  cout << "punctuations: " << punct << endl;
  cout << "others : " << others << endl;

  return 0;
}
