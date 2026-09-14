#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    pair<ll, ll> passenger[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> passenger[i].first >> passenger[i].second;
    }

    ll max = 0, passCount = 0;

    for (ll i = 0; i < n; i++)
    {
        passCount -= passenger[i].first;
        passCount += passenger[i].second;
        if (passCount > max)
        {
            max = passCount;
        }
    }
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
