#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll l, r;
    cin >> l >> r;

    cout << "YES" << endl;
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}