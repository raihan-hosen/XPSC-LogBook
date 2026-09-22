#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll m, n;
    cin >> m >> n;

    vector<ll> v1(m), v2(n);
    for (ll i = 0; i < m; i++)
    {
        cin >> v1[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    ll l = 0, r = 0, count = 0;

    while (r < n)
    {
        if (l < m && v1[l] < v2[r])
        {
            count++;
            l++;
        }
        else
        {
            cout << count << " ";
            r++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}