#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for (int i = 0; i < k; i++)
    {
        if (b[i] > a[i])
        {
            swap(a[i], b[i]);
        }
        else
        {
            break;
        }
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
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