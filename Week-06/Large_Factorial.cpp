#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll MOD = 1000000007;

ll factorial(ll n)
{
    if (n == 0)
        return 1;
    else
    {
        ll ans = 1;
        for (ll i = 1; i <= n; i++)
        {
            ans = (1LL * ans % MOD) * (i % MOD) % MOD;
        }
        return ans;
    }
}

void solve()
{
    ll n;
    cin >> n;
    cout << factorial(n) << endl;
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