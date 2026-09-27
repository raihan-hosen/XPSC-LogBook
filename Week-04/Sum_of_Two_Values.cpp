#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    ll x;
    cin >> n >> x;

    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        ll sum = a[l].first + a[r].first;
        if (sum == x)
        {
            cout << a[r].second << " " << a[l].second << endl;
            return;
        }
        else if (sum < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}