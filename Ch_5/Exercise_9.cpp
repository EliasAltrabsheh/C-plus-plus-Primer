#include <iostream>

using namespace std;

int main()
{
   int rows;
   char star = '*';
   char dot  = '.';
   cout << "Enter Number of rows: \n";
   cin >> rows;


for ( int j = 0;  j <= rows ; j++)  // main Loop that starts from zero
{


  for (int i = rows; i > j; i--)
  {
    cout << dot ;
  }
  for (int a = 0; a <= j; a++)
  {
    cout << star;
  }



cout << endl;
 }
return 0 ;
}
