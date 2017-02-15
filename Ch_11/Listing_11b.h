#ifndef LISTING_11a_H_
#define LISTING_11a_H_

class Time
{
private:
  int hours;
  int minutes;
public:
  Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h = 0, int m =0);        // constant function needed as for this class to change memnber makes it an error( it also because of this pointer )
  Time operator+(const Time & t) const; // over loading the functinallty of adding operator and defining the member to be a constant with a refrence to t location
  Time operator-(const Time & t) const;
  Time operator*(double mult) const;
  void Show() const;
};
#endif

 /* A "const function", denoted with the keyword const after a function declaration, makes it a compiler error for this class function to change a member variable of the class.
  However, reading of a class variables is ok inside of the function, but writing inside of this function will generate a compiler error.*/
