#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void check(const map<ll, pair<ll, ll>> &stations)
{
    ll l, r;
    cin >> l >> r;

    if (stations.count(l) && stations.count(r) && stations.at(l).first <= stations.at(r).second)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    map<ll, pair<ll, ll>> stations;

    for (ll i = 0; i < n; i++)
    {
        ll value;
        cin >> value;

        if (stations.find(value) == stations.end())
        {
            stations[value] = {i, i};
        }
        else
        {
            stations[value].second = i;
        }
    }

    while (k--)
    {
        check(stations);
    }
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
