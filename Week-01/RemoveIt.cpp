#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(ll n, ll x, const vector<ll> &v)
{
    for (ll i = 0; i < n; i++)
    {
        if (v[i] != x)
        {
            cout << v[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    solve(n, x, v);
    return 0;
}