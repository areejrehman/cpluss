#include <iostream>
using namespace std;
int main()
{
    int sum = 0, value;
    cout << "Enter the one numbers till the sum has to be calculated" << endl;
    cin >> value;
    for (int number = 1; number <= value; number++)
    {
        sum += number; // sum as sum = number
    }
    cout << "The sum of 1 to" <<value << " = " << sum << endl;
    return 0;

}
