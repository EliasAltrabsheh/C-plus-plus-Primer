/* this file will be able to read txt file and analyse it*/
#include<iostream>
#include<fstream>
#include<cstdlib> // support for exit

const int size = 60;

using namespace std;
int main()
{
  char filename[size];
  ifstream inFile; // object for handelling input data

  cout << "Enter name of data file: " << endl;
  cin.getline(filename,size);
  inFile.open(filename); //associate infile with a file

  if(!inFile.is_open()) // failed to open file
  {
    cout << "Could not open file " << endl;
    cout << "Program terminate";
    exit(EXIT_FAILURE); // exit command of cstdlib
  }
  double value;
  double sum = 0.0;
  int count = 0;

  inFile >> value;
  while(inFile.good())
  {
    ++count;
    sum += value;
    inFile >> value;
  }
  if (inFile.eof())
    cout << " End of file has been reached" << endl;
  else if(inFile.fail())
    cout << " Input mismatch of Data" <<endl;
  else
    cout << "Input terminaited I dont know how to fix this  ";

  if(count == 0)
    cout << "No data has been entered" << endl;
  else
  {
    cout << " Items read: " << count << endl;
    cout << "Sum: " << sum << endl;
    cout << " Average: " << sum/ count << endl;
  }
  inFile.close(); // Finished with file

  return 0;

}
