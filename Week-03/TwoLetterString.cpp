#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    ll ans = 0;
    map<string, ll> count1;
    map<string, ll> count2;
    map<string, ll> count_exact;

    for (int i = 0; i < n; i++)
    {
        string cur = s[i];
        string pat1 = string(1, cur[0]) + "*";
        string pat2 = "*" + string(1, cur[1]);

        ans += count1[pat1];
        ans += count2[pat2];
        ans -= 2 * count_exact[cur];

        count1[pat1]++;
        count2[pat2]++;
        count_exact[cur]++;
    }

    cout << ans << endl;
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
