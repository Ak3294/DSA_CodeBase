// FABONACCI SERIES :In which we have to give a Position in a series and
// find the Sum of last two numbers in a Series.
// 0 1 1 2 3 5 8 13 21

#include <iostream>
using namespace std;

int fibonacci(int n) //n=3
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    // Recursive case
    int smallOutput1 = fibonacci(n - 1); // fab(3)->fab(2)->fab(1)
    int smallOutput2 = fibonacci(n - 2); // fab(4)-> fab(3)->fab(2)->fab(1)

    // Calculation
    return smallOutput1 + smallOutput2;
}
int main()
{
    int pos;
    cout << "Enter the Position of a Number:";
    cin >> pos; // 3
    int output = fibonacci(pos);
    cout << "Fabonnaci Number of " << pos << " is :";
    cout << output;
}