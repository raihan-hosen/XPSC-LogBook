#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    ll minVal = LLONG_MAX;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < minVal)
        {
            minVal = v[i];
        }
    }

    ll minCount = 0;
    ll suffixGCD = 0;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] == minVal)
        {
            minCount++;
        }
        else if (v[i] % minVal == 0)
        {
            suffixGCD = gcd(suffixGCD, v[i]);
        }
    }

    if (minCount >= 2 || suffixGCD == minVal)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
