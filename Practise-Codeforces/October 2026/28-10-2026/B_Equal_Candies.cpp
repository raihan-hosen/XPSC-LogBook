#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll minVal = 1e18;
    ll sumVal = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        minVal = min(minVal, a[i]);
        sumVal += a[i];
    }

    ll ans = sumVal - (n * minVal);
    cout << ans << endl;
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