#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    ll even = 0, odd = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << abs(even - odd) / 2 << endl;
    }
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}