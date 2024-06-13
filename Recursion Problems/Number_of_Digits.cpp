#include <iostream>
using namespace std;

int Count(int digit)
{
    if (digit == 0)
    {
        return 0;
    }
    int smallAns = Count(digit / 10); // 674.6   -> 67.46  -> 6.746
    return smallAns + 1;
}
int main()
{
    int digit;
    cout << "Enter the Number for count the Digits :"; ///6746
    cin >> digit;
    Count(digit);
    cout << "Number of Digits is :" << Count(digit);

    return 0;
}