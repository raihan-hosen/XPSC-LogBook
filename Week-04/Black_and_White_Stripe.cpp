#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll currentW = 0;
    for (ll i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            currentW++;
        }
    }

    ll minW = currentW;
    for (ll i = k; i < n; i++)
    {
        if (s[i - k] == 'W')
        {
            currentW--;
        }

        if (s[i] == 'W')
        {
            currentW++;
        }
        minW = min(minW, currentW);
    }
    cout << minW << endl;
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