#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    map<ll, ll> prefix;
    prefix[0] = 1;

    ll sum = 0;
    ll total = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];

        ll required = sum - x;
        if (prefix.find(required) != prefix.end())
        {
            total += prefix[required];
        }

        prefix[sum]++;
    }

    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}