#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        pref[i + 1] = pref[i] + a[i];
    }

    int l = 0, r = n - 1;
    ll total = 0;

    while (l < r)
    {
        while (l < r && s[l] != 'L')
        {
            l++;
        }
        while (l < r && s[r] != 'R')
        {
            r--;
        }
        if (l < r && s[l] == 'L' && s[r] == 'R')
        {
            total += (pref[r + 1] - pref[l]);
            l++;
            r--;
        }
    }

    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}