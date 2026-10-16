#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;

    ll sum1 = s[0] + s[1] + s[2];
    ll sum2 = s[5] + s[4] + s[3];

    if (sum1 == sum2)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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