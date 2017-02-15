#include<iostream>
#include<cstring>

using namespace std;

int main()
{
   const int size = 30;
   char word[size];
   int i = 0;
   cout << " Enter Words (to stop , type the word done) :\n";

  while (strcmp(word,"done"))
   {
     cin >> word;
     i++;
   }
  cout << " you Enterd the total of " << i - 1 << " words";
  return 0;
}
