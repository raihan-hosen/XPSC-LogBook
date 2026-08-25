#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    ll ones = 0;
    ll others = 0;

    for (ll i = 0; i < n; i++)
    {
        ll h;
        cin >> h;
        if (h == 1)
        {
            ones++;
        }
        else
        {
            others++;
        }
    }

    ll ans = others + (ones / 2) + (ones % 2);
    cout << ans << endl;
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