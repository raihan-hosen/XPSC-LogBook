#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(vector<ll> a, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            reverse(a.begin(), a.begin() + i);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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
    solve(a, n);
    return 0;
}