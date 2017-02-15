/* This program shows to  using a text file as an input.

These are the main steps:
1) include the fstream header file.
2) create an ofstream object
3) Associate the ofstream object with a file
4) use the ofstream object in the same manner you would use cout

*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  char car[50];
  int year;
  double a_price, d_price;

  ofstream outFile; //create object for output
  outFile.open("carinfo.txt"); //associate with file

  cout << "Enter car brand and model: " << endl;
  cin.getline(car,50); // read full line

  cout << "Enter model year " << endl;
  cin >> year;
  cout << "Enter original price" << endl;
  cin >>a_price;
  d_price = 0.913 * a_price;

  // display info on console
  cout << fixed;
  cout.precision(2);
  cout.setf(ios_base:: showpoint); // setting fixed precision from stream file
  cout << "Make and model: " << car << endl;
  cout << " year: " << year << endl;
  cout << "Was asking £" << a_price << endl;
  cout << "Now asking £" << d_price << endl;

  // lets do the same for txt output
  outFile << fixed;
  outFile.precision(2);
  outFile.setf(ios_base:: showpoint); // setting fixed precision from stream file
  outFile << "Make and model: " << car << endl;
  outFile << " year: " << year << endl;
  outFile << "Was asking £" << a_price << endl;
  outFile << "Now asking £" << d_price << endl;

outFile.close();
return 0;

}
