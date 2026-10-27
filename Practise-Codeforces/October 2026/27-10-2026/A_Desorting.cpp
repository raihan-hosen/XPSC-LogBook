#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << 0 << endl;
            return;
        }
    }

    ll ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        ll diff = a[i + 1] - a[i];
        ll ops = (diff / 2) + 1;
        if (ans == -1 || ops < ans)
        {
            ans = ops;
        }
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