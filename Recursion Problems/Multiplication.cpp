#include <iostream>
using namespace std;

int multiply(int m, int n)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }

    int sol = multiply(m, n - 1);
    return sol + m;
}
int main()
{
    int m, n, sol;
    cout << "Enter the Value of M :";
    cin >> m;
    cout << "Enter the value of N :";
    cin >> n;

    cout << "Solution of the Multiplication is :";
    cout << multiply(m, n);
}