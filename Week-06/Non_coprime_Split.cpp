#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll prime(ll n)
{
    if (n % 2 == 0)
        return 2;
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

void solve()
{
    ll l, r;
    cin >> l >> r;

    for (ll s = l; s <= r; s++)
    {
        if (s <= 3)
        {
            continue;
        }

        if (s % 2 == 0)
        {
            cout << 2 << " " << s - 2 << endl;
            return;
        }
        else
        {
            ll p = prime(s);
            if (p != s)
            {
                cout << p << " " << s - p << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}