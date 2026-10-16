#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    ll totalDrink = k * l;
    ll totalToasts = totalDrink / nl;
    ll totalSalt = p / np;
    ll totalLimes = c * d;

    cout << min({totalToasts, totalSalt, totalLimes}) / n << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}