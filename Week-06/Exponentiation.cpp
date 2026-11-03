#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll MOD = 1e9 + 7;

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (a == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 1;
    a = a % MOD;

    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }

    cout << ans << endl;
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
