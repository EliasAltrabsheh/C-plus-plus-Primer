/*

Let’s look at another topic from C++’s bag of new tricks:the default argument.
A default argument is a value that’s used automatically if you omit the corresponding actual argument from a function call.
For example,if you set up void wow(int n) so that n has a default value of 1,the function call wow() is the same as wow(1).
This gives you flexibility in how you use a function

*/

// left.cpp -- string function with a default argument
#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1); // prototype with seeting str as pointer 

int main()
{
  using namespace std;
  char sample[ArSize];
  cout << "Enter a string:\n";
  cin.get(sample,ArSize);
  char *ps = left(sample, 4);
  cout << ps << endl;
  delete [] ps;       // free old string
  ps = left(sample);
  cout << ps << endl;
  delete [] ps;       // free new string
  return 0;
}


// This function returns a pointer to a new string
// consisting of the first n characters in the str string.
char * left(const char * str, int n)
{
  if(n < 0)
  n = 0;
  char * p = new char[n+1];
  int i;
  for (i = 0; i < n && str[i]; i++)
      p[i] = str[i];  // copy characters
  while (i <= n)
      p[i++] = '\0';  // set rest of string to '\0'
  return p;
}
