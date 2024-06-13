#include <iostream>
using namespace std;

int zero(int digit)
{

    if (digit == 0)
    {
        return 0;
    }
    int newdigit = zero(digit / 10);

    int rem = digit % 10;
    if (rem == 0)
    {
        return 1 + newdigit;
    }
    else
    {
        return newdigit;
    }
}
int main()
{
    int digit;
    cout << "Enter the Integers Number :";
    cin >> digit;

    cout << zero(digit);
}