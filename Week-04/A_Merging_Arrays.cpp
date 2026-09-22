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

    v1.insert(v1.end(), v2.begin(), v2.end());

    sort(v1.begin(), v1.end());

    for (ll i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << (i < v1.size() - 1 ? " " : "");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
