#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll diff = abs(a - b);

    ll moves = (diff + 9) / 10;

    cout << moves << endl;
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