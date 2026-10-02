#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll total = 0;
    ll i = 0;
    while (i < n)
    {
        ll j = i;
        while (j + 1 < n && a[j] <= a[j + 1])
        {
            j++;
        }
        ll length = j - i + 1;
        total += length * (length + 1) / 2;
        i = j + 1;
    }

    cout << total << endl;
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