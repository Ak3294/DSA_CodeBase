// Prefix Sum for 1D Array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int pf[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pf[i] = pf[i - 1] + arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        cout << pf[r] - pf[l - 1] << endl;
    }
}