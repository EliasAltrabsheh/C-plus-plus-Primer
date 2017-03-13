
// Constructer Stock Example
#include <iostream>
#include "stock.h" // also known as string.h which is a header that has various function for manipulating strings
#include <cstring>
//constructers
Stock::Stock() //Declaration of our class defult constructer
{
  std::cout << "Defult Copnstructer called" << '\n';
  std::strcpy(company, "no name");
  shares = 0;
  share_val = 0.0;
  total_val = 0.0;
}

Stock::Stock(const char * co, int n , double pr) //Declaration of our class defult constructer
{
  std::cout << "Constructers using" << co << "called\n" ;
  std::strncpy(company, co ,29);
  company[29] = '\0';

  if (n < 0)
  {
    std::cerr<<"number of shares can't be negative;" << co << " Share set to 0.\n  " ;
    shares = 0;
  }

  else
  {
    shares = n;
    share_val = pr;
    set_tot();
  }
}

// class destructer
Stock::~Stock()
{
  std::cout << "Bye, " << company << "!\n";
}

// other methods of using this
void Stock::buy(int num, double price)
{
  if (num < 0)
  {
    std::cerr << "number of shares can't be negative;" << "Transaction is aborted.\n";
  }
  else
  {
    shares += num;
    share_val = price;
    set_tot();
  }
}


void Stock::sell(int num, double price)
{
  if (num < 0)
  {
    std::cerr<<"number of shares can't be negative;" <<"Transaction is aborted.\n";
  }

  else if (num > shares)

  {
    std::cerr<<"you cant sell more than you have!duh!;" <<"Transaction is aborted.\n";
  }

  else
  {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price)
{
  share_val = price;
  set_tot();
}

void Stock::show()
{
  using std::cout;
  using std::endl;
  cout <<"Company: " << company
  << " Shares: " << shares  <<  endl
  << " Shares Price: £" << share_val
  << " Total Worth: £"  <<  total_val <<endl;
}
