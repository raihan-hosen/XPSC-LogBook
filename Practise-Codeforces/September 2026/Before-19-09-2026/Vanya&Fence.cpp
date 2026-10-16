#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, h, width = 0;
    cin >> n >> h;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (auto it : v)
    {
        if (it <= h)
        {
            width++;
        }
        else
        {
            width += 2;
        }
    }

    cout << width << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
