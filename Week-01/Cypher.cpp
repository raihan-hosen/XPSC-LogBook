#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> health(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> health[i];
    }

    vector<ll> original_digits(n);
    for (ll i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        string s;
        cin >> s;

        ll current = health[i];
        for (int j = b - 1; j >= 0; j--)
        {
            if (s[j] == 'U')
            {
                current = (current - 1 + 10) % 10;
            }
            else
            {
                current = (current + 1) % 10;
            }
        }
        original_digits[i] = current;
    }

    for (ll i = 0; i < n; i++)
    {
        cout << original_digits[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}