#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;

    if (s.length() == 1)
    {
        int d = s[0] - '0';
        int cost0 = d;
        int cost9 = 9 - d;
        cout << min(cost0, cost9) << endl;
        return;
    }

    ll sum = 0;
    for (char c : s)
    {
        sum += (c - '0');
    }

    int rem = sum % 9;

    ll maxDecrease = 0;
    ll maxIncrease = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int d = s[i] - '0';
        if (i == 0)
        {
            maxDecrease += (d - 1);
        }
        else
        {
            maxDecrease += d;
        }
        maxIncrease += (9 - d);
    }

    ll ans = 1e18;

    if (maxDecrease >= rem)
    {
        ans = min(ans, (ll)rem);
    }

    ll target = 9 - rem;
    if (maxIncrease >= target)
    {
        ans = min(ans, target);
    }

    cout << ans << endl;
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