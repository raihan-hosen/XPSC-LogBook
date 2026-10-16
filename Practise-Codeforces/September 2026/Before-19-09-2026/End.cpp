#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(vector<ll> a, ll n)
{
    ll i = 0;
    while (i < n - 1 - i)
    {
        cout << a[i] << " " << a[n - 1 - i] << " ";
        i++;
    }
    if (i == n - 1 - i)
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