/* this program looks at 2d array with use of pointer allocations*/

#include<iostream>
using namespace std;

const int Cities = 5;
const int Years = 4;

int main()
{
  const char * cities[Cities]=
  {
    "Gribble City",
    "Amman",
    "Irbid",
    "London",
    "New York"
  }; // array of pointer to 5 strings

  int maxtemps[Years][Cities] =
  {
    {95,99,86,100,104}, // value for maxtemps[0]
    {55,49,26,120,109}, // value for maxtemps[1]
    {35,94,86,150,104}, // value for maxtemps[2]
    {76,34,65,100,105}, // value for maxtemps[3]
    {97,102,89,108,104}, // value for maxtemps[4]
  }; // 2d Array of pointers

  cout << "Maixumum tempruture for 2002 - 2005 : " << endl;
  for(int city = 0, ) 
}
