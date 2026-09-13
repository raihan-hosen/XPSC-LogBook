#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    map<ll, ll> freq;
    ll max_freq = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        freq[x]++;
        max_freq = max(max_freq, freq[x]);
    }

    ll ans = max(n % 2, 2 * max_freq - n);
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
