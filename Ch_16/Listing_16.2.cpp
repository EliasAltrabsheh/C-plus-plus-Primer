#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("tobuy.txt");
    if (fin.is_open() == false)
    {
      cerr << "cant open file .\n"; // error output
      exit(EXIT_FAILURE);
    }
  string item;
  int count = 0;

  getline(fin, item, ':');
  while (fin) // while input is good
  {
    ++count;
    cout << count << ": " << item << endl;
    getline(fin,item, ':');
  }
  cout << " Done\n";
  fin.close();
  return 0 ;
}
