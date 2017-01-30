/* game of hangman using strings*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using std :: string;
using std::cout;
using std::cin;
using std::endl;
using std::tolower;
const int NUM = 26;
const string wordlist[NUM] = { "apaiary", "beetle", "cereal", "danger" , "ensign", "florid", "garage" , "health","insult","lonner", "jackel", "keeper" , "manage", "nonce"
, "onset", "plaid", "quilt", "remote", "stolid", "train", "useful", "valid", "Whence", "xenon", "yearn", "zippy"};

int main()
{
  std::srand(std::time(0));
  char play;
  cout << " Do you you wanna play hangman? <y/n>";
  cin >> play;
  play = tolower(play);
  while (play =='y')
  {
    string target = wordlist[std::rand()%NUM];
    int length = target.length();
    string attempt(length, '-');
    string badchar;
    int guesses = 6;
    cout << " Guess my secret word it has " << length
    << " letters, and you Guess \n"
    << "one letter at a time you get" << guesses
    <<" wrong guesses.\n";

    cout << "your word: " << attempt << endl;

    while(guesses > 0 && attempt!= target)
    {
      char letter;
      cout << "Guess a letter : ";
      cin >> letter;

        if (badchar.find(letter)!= string::npos||attempt.find(letter) != string::npos)
        {
          cout <<"you already gussed that. try again\n ";
          continue;
         }
      int loc = target.find(letter);
      if(loc == string::npos)
        {
            cout << "oh, bad guess!\n";
            -- guesses;
            badchar += letter; // add to string
        }
      else
        {
          cout << "Good guess!\n";
          attempt[loc] = letter;
          // check if letter appers again
          loc = target.find(letter, loc + 1);
          while(loc!= string::npos)
          {
            attempt[loc] = letter;
            loc = target.find(letter, loc + 1);
          }
       }
    cout << "your word " << attempt << endl;

        if (attempt!= target)
        {
            if(badchar.length() > 0)
            {
              cout << "Bad choices: " << badchar << endl;
            }
          cout << guesses << " bad guesses left \n";
        }
      } // end of second while

      if(guesses > 0)
        cout << "thats right!!\n";
      else
        cout << "Sorry, the word is " << target <<endl;

      cout << "will you play again?<y/n> " ;
      cin >> play;
      play = tolower(play);
  } //while end
  cout << "Bye\n";
  return 0;
}// main end
