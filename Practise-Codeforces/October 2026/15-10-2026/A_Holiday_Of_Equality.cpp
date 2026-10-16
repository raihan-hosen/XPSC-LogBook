#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    if (n <= 1)
        cout << "0" << endl;

    else
    {
        vector<ll> citizen(n);
        ll target = -2e18, ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> citizen[i];
            if (citizen[i] > target)
            {
                target = citizen[i];
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if (citizen[i] < target)
            {
                ans += target - citizen[i];
            }
        }

        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}