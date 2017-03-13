#include<iostream>

unsigned int c_in_str(const * str,char ch); // Function prototype

int main()
{
  using namespace std;

  char mmm[15] = "Minimum";//string in an array

  const char *wail = "ululate";    // wail points to string

  unsigned int ms = c_in_str(mmm, 'm'); // callaing function using string of char
  unsigned int us = c_in_str(wail, 'u'); // calling function using string of pointer to char
  cout << ms << " m characters in " << mmm << endl;
  cout << us << " u characters in " << wail << endl;
  return 0;
}

// this function counts the number of ch characters // in the string str
 unsigned int c_in_str(const char * str, char ch)
 {
   unsigned int count = 0;
while (*str)        // quit when *str is '\0'
{
  if (*str == ch)
      count++;
  str++;        // move pointer to next char
 }
 return count;
}
