#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(ll n, vector<ll> a)
{
    ll sum = 0;
    ll minOdd = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 2 != 0)
        {
            minOdd = min(minOdd, a[i]);
        }
    }
    if (sum % 2 != 0)
    {
        sum -= minOdd;
    }
    cout << sum << endl;
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
    solve(n, a);
    return 0;
}