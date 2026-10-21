#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    ll ans = 0, size = s.size();
    for (ll i = 0; i < size; i++)
    {
        if (s[i] == '1')
        {
            ans += a;
        }
        else if (s[i] == '2')
        {
            ans += b;
        }
        else if (s[i] == '3')
        {
            ans += c;
        }
        else if (s[i] == '4')
        {
            ans += d;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}