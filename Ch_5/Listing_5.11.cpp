/* program sample deals with c string comparasions with an array */

#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[5] = "?ate"; // pre define charcahter array

    for(char ch = 'a'; strcmp(word, "mate"); ch++) // use strcmp c function that copy This function starts comparing the first character of each string. If they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null-character is reached.
    {
      cout << word << endl;
      word[0] = ch;
    }
    cout << "after loop ends, word is " << word << endl;
   return 0;
}
