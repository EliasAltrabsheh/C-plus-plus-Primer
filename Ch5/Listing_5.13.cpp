/* programe as an intruduction of while loops */

#include<iostream>
using namespace std;

const int size = 20;

int main()
{
  char name[size];

  cout << "Enter your first name : ";
  cin >> name;
  cout << "Your name is veticalized with its corrsponding ascii value: "<<endl;
int i =0;
while(name[i] != '\0')
{
  cout << name[i] << " : " << int(name[i]) << endl;
  i++;
}
return 0;
}
