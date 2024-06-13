#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, D;
    cin >> S >> D;

    if (S == 0)
    {
        if (D == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        return 0;
    }

    if (S > 9 * D)
    {
        cout << -1 << endl;
        return 0;
    }

    string ans = "";
    int cur_sum = 1;
    for (int i = 1; i < D; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (S - cur_sum - j >= 0)
            {
                ans += to_string(j);
                cur_sum += j;
                break;
            }
        }
    }

    ans += to_string(S - cur_sum);
    reverse(ans.begin(), ans.end());

    if (ans[0] == '0')
    {
        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i] != '0')
            {
                swap(ans[0], ans[i]);
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
