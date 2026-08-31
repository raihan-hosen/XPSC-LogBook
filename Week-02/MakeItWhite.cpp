#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (s.size() == 1 && s[0] == 'W')
    {
        cout << 0 << endl;
        return;
    }
    else if (s.size() == 1 && s[0] == 'B')
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        ll start = 0, end = s.size() - 1;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                start = i;
                break;
            }
        }
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                end = i;
                break;
            }
        }
        cout << (end - start) + 1 << endl;
    }
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