#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll x, k;
    cin >> x >> k;

    if (x % k != 0)
    {
        cout << 1 << endl;
        cout << x << endl;
    }

    else
    {
        cout << 2 << endl;
        cout << x - 1 << " " << 1 << endl;
    }
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