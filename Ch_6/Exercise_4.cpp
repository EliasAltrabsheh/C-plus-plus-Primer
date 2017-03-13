

#include<iostream>


using namespace std;

//int strsize = 20;
int ListLength = 4;

struct bop {
  char fullname[20]; // real name
  char title[20];    // job title
  char bopname[20];  // secret BOP name
  int preference;         // 0 = fullname, 1 = title, 2 = bopname
};


int main()
{

  bop programmer[ListLength] =
  {
    {"david william" , "Mr" , " bob" , 1},
    {"john snow" , "c++ Anaylst" , " king" , 2},
    {"Katy perry" , "Writer" , " hotty" , 1},
    {"david beckham", "basketball player", "daredevil",3}
  };

  cout << "Benevolet Order of Programmers Report \n"
       << " a. display name \t"     << "b. display by title \n"
       << " c. display by bobname\t" << "d. display by preferance \n"
       << " q. quit\n";
char input;
cin >> input;

while (input != 'q')
{
  while (input != 'a' && input != 'b' && input != 'c' && input != 'd')
  {
    cin.ignore(100, '\n');			// discard input
    cout << "Enter a, b, c, d, or q: ";
    cin >> input;

    if (input == 'q')				// quit program if input is 'q'
    {
      goto end_of_program;
    }
  }

  // begin switinput case since input is appropriate
  switch (input)
  {
    case 'a':	// list names
    for (int i = 0; i < ListLength; i++)
    {
      cout << programmer[i].fullname << endl;
    }
    break;
    case 'b':	// list titles
    for (int i = 0; i < ListLength; i++)
    {
      cout << programmer[i].title << endl;
    }
    break;
    case 'c': 	// list bopnames
    for (int i = 0; i < ListLength; i++)
    {
      cout << programmer[i].bopname << endl;
    }
    break;
    case 'd': 	// list preferences
    for (int i = 0; i < ListLength; i++)
    {
      switch (programmer[i].preference)
      {
        case 0:
            cout << programmer[i].fullname << endl;
            break;
        case 1:
            cout << programmer[i].title << endl;
            break;
        case 2:
            cout << programmer[i].bopname << endl;
      }
    }

  }
  cout << "Next choice: ";		// reprompt user to make new selection
  cin >> input;

}

end_of_program:
cout << "Bye!" << endl;


return 0;
}
