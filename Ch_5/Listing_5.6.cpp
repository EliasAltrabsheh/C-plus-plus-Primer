/* this small example looks at a for loop with string implementation */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cout << "enter word : ";
    cin >> word;

    for (int i = word.size()-1; i>=0; i--) // for loop looks at string property with word size is size of string minus /0(_empty space) element
    {
      cout << word[i];
    }
  return 0;
}
