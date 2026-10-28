#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum < s)
    {
        cout << -1 << endl;
        return;
    }

    if (sum == s)
    {
        cout << 0 << endl;
        return;
    }

    int l = 0;
    ll currentSum = 0;
    int maxLen = -1;

    for (int r = 0; r < n; r++)
    {
        currentSum += a[r];

        while (currentSum > s)
        {
            currentSum -= a[l];
            l++;
        }

        if (currentSum == s)
        {
            maxLen = max(maxLen, r - l + 1);
        }
    }

    cout << n - maxLen << endl;
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