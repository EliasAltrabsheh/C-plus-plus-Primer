/* this program looks at the comma',' operater when set between (--i, ++j) in for loop that does not act as seperator*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cout << "enter word : ";
    cin >> word;

//--------------------------------------
//--- Modify string object
//----------------------
  char temp;
  int i,j; // comma here acts as a seperator

    for (j = 0, i = word.size()-1; j < i; --i, ++j) // for loop looks at string property with word size is size of string minus /0(_empty space) element
    {
      temp = word[i];  cout << temp << endl;
      word[i] = word[j];cout << word[i] << endl;
      word[j] =temp; cout << word[j] << endl;
        cout << word<<endl;
    }
    cout << word;
  return 0;
}
