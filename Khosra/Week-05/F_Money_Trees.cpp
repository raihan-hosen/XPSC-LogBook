#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n), h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int maxLen = 0;
    int l = 0;
    ll sum = 0;

    for (int r = 0; r < n; r++)
    {
        if (r > 0 && h[r - 1] % h[r] != 0)
        {
            l = r;
            sum = 0;
        }

        sum += a[r];

        while (sum > k)
        {
            sum -= a[l];
            l++;
        }

        maxLen = max(maxLen, r - l + 1);
    }

    cout << maxLen << endl;
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