/* listing with function and arrays*/
#include <iostream>

const int Arsize = 8;

int sum_arr(int arr[], int n); //prototype

int main()
{
  int cookies[Arsize] = {1,2,4,8,16,32,64,128};

 //  some systems require preceding int with static to
 //  enable array initialization
 std::cout << cookies << " = array adress ,";
 std::cout << sizeof cookies << " sizeof cookies\n";

 int sum = sum_arr(cookies, Arsize); // calling sum function and returning back total

 std::cout <<"Total cookies eaten : " << sum << std::endl;

 sum = sum_arr(cookies, 3);        // a lie
 std::cout << "First three eaters ate " << sum << " cookies.\n";
 sum = sum_arr(cookies + 4, 4);    // another lie
 std::cout << "Last four eaters ate " << sum << " cookies.\n";
  return 0;
}

int sum_arr(int arr[], int n)
{
  int total = 0;
  std::cout << arr << " = arr, ";
  std::cout << sizeof arr << " = sizeof arr\n";
  for(int i = 0; i< n; i++)
  {
    total += arr[i];
  }
return total;
}
