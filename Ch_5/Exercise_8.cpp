#include<iostream>
#include<string>

using namespace std;

int main()
{

   string word;
   int i = 0;
   cout << " Enter Words (to stop , type the word done) :\n";

  while (word != "done")
   {
     cin >> word;
     i++;
   }
  cout << " you Enterd the total of " << i - 1 << " words";
  return 0;
}
