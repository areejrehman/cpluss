#include <iostream>
using namespace std;
int main()
{
   int sum = 0;
   for(int value = 1; value <= 10; value++)
   {
    sum += value; // sum as sum = value
   }
   cout << "sum of 1 to 10" << "is" << sum << endl;
   return 0;
}