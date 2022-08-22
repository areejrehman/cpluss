#include <iostream>
using namespace std;
int main()
{
  int  sum = 0;
  for (int number = 50; number <= 100; number++)
  {
    sum += number; // sum as sum = number
  }
  cout << "the sum of 50 to 100" << "is" << sum << endl;
  return 0;                   

}
