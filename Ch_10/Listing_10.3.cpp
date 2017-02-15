#include <iostream>
#include <cstring> // also known as string.h which is a header that has various function for manipulating strings


class Stock //Declaration of our class
{
private:  // private members of stock 
  char company[30];
  int shares;
  double share_val;
  double total_val;
  void set_tot()
  {
   total_val = shares * share_val;
  }
  public :
  void acquire(const char*co, int n, double pr);
  void buy(int num,double price);
  void sell(int num,double price);
  void update (double price);
  void show();
};

void Stock::acquire(const char * co, int n, double pr)
{
  std::strncpy(company, co, 29);
  //trancate co to fit company strncpy (copies the first num characters of source to destination)
  company[29]='\0';
  if (n < 0)
  {
    std::cerr<<"number of shares can't be negetive;" <<company<<"shares set to 0.\n";
    // cerr is an object like cout but is used for error messages and in unix OP you can diffrentaion between both
  }
  else
  shares = n;
  share_val = pr;
  set_tot();
}

void Stock::buy(int num, double price)
{
  if (num < 0)
  {
    std::cerr<<"number of shares can't be negative;" <<"Transaction is aborted.\n";
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

int main()
{
  using std::cout;
  using std::ios_base;
  Stock stock1;
  stock1.acquire("NanoSmart" , 20, 12.50);
  cout.setf(ios_base::fixed);// used fixed decimail points to format
  cout.precision(2);//two places to right of decimal
  cout.setf(ios_base::showpoint);//show trailling zeroes
  stock1.show();
  stock1.buy(15, 18.25);
  stock1.show();
  stock1.sell(400, 20.00);
  stock1.show();
  return 0;

}
