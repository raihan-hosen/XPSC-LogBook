#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll gcd1 = 0, gcd2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        gcd1 = gcd(gcd1, a[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        gcd2 = gcd(gcd2, a[i]);
    }

    bool ok1 = true;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % gcd1 == 0)
        {
            ok1 = false;
            break;
        }
    }

    bool ok2 = true;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % gcd2 == 0)
        {
            ok2 = false;
            break;
        }
    }

    if (ok1)
    {
        cout << gcd1 << endl;
    }
    else if (ok2)
    {
        cout << gcd2 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
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