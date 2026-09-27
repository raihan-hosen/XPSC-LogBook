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

    for (int i = 0; i < n - 2; ++i)
    {
        ll target = x - a[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            ll current_sum = a[l].first + a[r].first;
            if (current_sum == target)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return;
            }
            else if (current_sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
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