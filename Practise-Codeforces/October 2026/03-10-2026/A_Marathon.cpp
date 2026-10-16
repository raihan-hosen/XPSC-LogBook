#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    if (a < b)
    {
        count++;
    }
    if (a < c)
    {
        count++;
    }
    if (a < d)
    {
        count++;
    }
    cout << count << endl;
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