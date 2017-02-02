
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

const int size = 25;
char first_name[size];
char last_name[size];


cout << "Enter your first name : \n" ;
cin.get(first_name,size).get();
cout << "Enter your last name : \n";
cin.get(last_name,size);
 int total_size = strlen(first_name) + strlen(last_name);
 cout << strlen(last_name);

 char *full_name = new char[total_size]; // created dynamic location for new storage
 full_name = strcat(last_name, first_name);  // concatenate two strings so size of last name now consisits of both

cout << "Here is your information in one line : ";

 for(int i = 0; i< total_size; i++) // for loop for output 
 {
   if ( i == strlen(last_name) - strlen(first_name) ) // condotional statment for finding when last name ends
     {
         cout << ", " << full_name[i];

      }
    else
      {
          cout << full_name[i];
      }

 }

return 0;
}
