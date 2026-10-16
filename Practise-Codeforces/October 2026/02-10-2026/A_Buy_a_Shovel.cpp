#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll k, r;
    cin >> k >> r;

    for (ll i = 1; i <= 10; i++)
    {
        ll total = k * i;
        if (total % 10 == 0 || total % 10 == r)
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}