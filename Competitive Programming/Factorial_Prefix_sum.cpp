// Find the Factorial of the Number using Prefix Sum Methodology.

#include <iostream>
using namespace std;

const int N = 1e3 + 10;
long long int fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= N; ++i)
    {
        fact[i] = fact[i - 1] * i;
    }
    long long int N;
    cout << "Enter the Number :";
    cin >> N;
    cout << fact[N];
}