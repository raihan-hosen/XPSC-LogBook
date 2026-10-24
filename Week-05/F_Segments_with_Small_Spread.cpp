#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    int l = 0;
    multiset<ll> ms;

    for (int r = 0; r < n; r++)
    {
        ms.insert(a[r]);

        while (*ms.rbegin() - *ms.begin() > k)
        {
            ms.erase(ms.find(a[l]));
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}