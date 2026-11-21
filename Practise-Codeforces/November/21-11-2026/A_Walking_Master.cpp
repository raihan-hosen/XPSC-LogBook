#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b)
    {
        cout << -1 << endl;
        return;
    }

    ll dy = d - b;
    ll maxX = a + dy;

    if (c > maxX)
    {
        cout << -1 << endl;
        return;
    }

    ll leftMoves = maxX - c;
    cout << dy + leftMoves << endl;
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