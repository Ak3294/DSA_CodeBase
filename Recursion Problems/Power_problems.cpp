#include <iostream>
using namespace std;

int power(int val, int pow)
{

    if (pow == 0)
    {
        return 1;
    }
    // Recursive call
    int smallOutput = power(val, pow - 1);

    // calculation
    return val * smallOutput;
}

int main()
{
    int n, m;
    cout << "Enter the Integer Number :";
    cin >> n;
    cout << "Enter the power of the Number :";
    cin >> m;
    int output = power(n, m);
    cout << "Output is : " << output;
}