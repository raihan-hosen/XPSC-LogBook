#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll maxVal = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }

    ll z = 0;
    ll total = 0;

    for (int i = 0; i < n; i++)
    {
        ll diff = maxVal - a[i];
        if (diff > 0)
        {
            z = gcd(z, diff);
        }
    }

    for (int i = 0; i < n; i++)
    {
        total += (maxVal - a[i]) / z;
    }

    cout << total << " " << z << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}