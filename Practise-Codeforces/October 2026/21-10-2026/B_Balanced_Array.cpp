#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    int k = n / 2;
    if (k % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    ll evenSum = 0;

    for (int i = 1; i <= k; ++i)
    {
        int val = 2 * i;
        cout << val << " ";
        evenSum += val;
    }

    ll oddSum = 0;
    for (int i = 1; i < k; ++i)
    {
        int val = 2 * i - 1;
        cout << val << " ";
        oddSum += val;
    }

    cout << evenSum - oddSum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}