#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a + b >= 10 || a + c >= 10 || b + c >= 10)
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