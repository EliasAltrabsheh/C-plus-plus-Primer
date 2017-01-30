/* this looks at how refrence return function effect ofstream() input and output */

/* the main point of this example is to illustrae ostream & is refrence to ostream objects such as cout */
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream & os, double fo, const double fe[],int n);
const int LIMIT = 5;


int main()
{
  ofstream fout;
  const char * fn = "ep-data.txt";
  fout.open(fn);
  if (!fout.is_open())
  {
    cout << "Cant open" << fn << endl;
    exit(EXIT_FAILURE);
  }
  double objective;
  cout << "Enter the focal length of your " << "telescope objective in mm : " << endl;
  cin >> objective;
  double eps[LIMIT];
  cout << "Enter the focal length, in mm, of " << LIMIT << " eyepiece: \n";
  for( int i = 0; i < LIMIT; i++)
  {
    cout << "eyepiece #" << i + 1 <<": ";
    cin >> eps[i];
  }
  file_it(fout, objective, eps, LIMIT); // writes eye piece data to txt file
  file_it(cout, objective, eps, LIMIT);
  cout << "\nDone";
  return 0;

}

void file_it(ostream & os, double fo, const double fe[],int n)
{
  ios_base::fmtflags initial; // fancy name for the typeneeded 
  initial = os.setf(ios_base::fixed); // save initail format
  os.precision(0);
  os << "focal length of objective : " << fo << " mm\n";
  os.setf(ios::showpoint);
  os.precision(1);
  os.width(12);
  os << "f eyepiece";
  os.width(15);
  os << " magnification " << endl;
  for(int i = 0; i < n; i++)
  {
      os.width(12);
      os << fe[i];
      os.width(15);
      os << int (fo/fe[i] + 0.5)<< endl;
  }
  os.setf(initial); // reatore initail formatting setting
}
