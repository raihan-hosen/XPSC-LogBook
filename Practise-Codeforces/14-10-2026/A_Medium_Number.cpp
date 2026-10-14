#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    vector<ll> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());
    cout << v[1] << endl;
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