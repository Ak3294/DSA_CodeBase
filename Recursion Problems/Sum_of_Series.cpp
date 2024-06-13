// 1 + 1/2^k + 1/2^k-1 +1/2^k-2 .........1/2^k

#include <bits/stdc++.h>
using namespace std;

double sum_series(int k)
{
    if (k == 0)
    {
        return 1;
    }
    double smallans = sum_series(k - 1);

    return smallans + 1.0 / pow(2, k);
}
int main()
{
    cout << "Sum of the Series is :" << sum_series(5);
    return 0;
}