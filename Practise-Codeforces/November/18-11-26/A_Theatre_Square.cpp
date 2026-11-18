#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll stoneN = (n + a - 1) / a;
    ll stoneM = (m + a - 1) / a;

    ll total = stoneN * stoneM;
    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}