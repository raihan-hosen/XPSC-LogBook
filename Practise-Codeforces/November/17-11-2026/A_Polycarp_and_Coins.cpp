#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    ll k = n / 3;
    ll r = n % 3;

    ll c1 = k, c2 = k;
    if (r == 1)
    {
        c1++;
    }
    else if (r == 2)
    {
        c2++;
    }

    cout << c1 << " " << c2 << endl;
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