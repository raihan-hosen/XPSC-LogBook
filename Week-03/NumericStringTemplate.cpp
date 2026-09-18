#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll m;
    cin >> m;

    while (m--)
    {
        string s;
        cin >> s;

        if (s.length() != n)
        {
            cout << "NO" << endl;
            continue;
        }

        map<char, ll> templates;
        bool check = false;

        for (ll i = 0; i < n; i++)
        {
            if (templates.count(s[i]) == 0)
            {
                for (auto const &[key, val] : templates)
                {
                    if (val == v[i])
                    {
                        check = true;
                        break;
                    }
                }
                if (check)
                    break;

                templates[s[i]] = v[i];
                check = false;
            }

            else if (templates.count(s[i]) > 0)
            {
                ll value = templates[s[i]];
                if (value != v[i])
                {
                    check = true;
                    break;
                }
            }
        }
        if (check == true)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
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
