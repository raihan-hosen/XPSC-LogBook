#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(ll n, vector<ll> a, vector<ll> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    solve(n, a, b);
    return 0;
}