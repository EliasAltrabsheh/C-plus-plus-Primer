/* small program for a waiting using ctime clock inbuilt function */

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
  float secs;
  cout << " enter time of delay in seconds : ";
  cin >> secs;

  clock_t delay = secs * CLOCKS_PER_SEC; // CLOCKS_PER_SEC is a macro thqat is part of time.h library which is seconds
  clock_t start = clock();  // start is clock function which is dep[ending on procsser]
  while(clock() - start < delay )
    ; // do nothing line
  cout << "done \a\n"; // \a is alarm sound.
  return 0;
}
