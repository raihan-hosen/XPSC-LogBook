#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0;
    ll length = 0;
    ll l = 0;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum > s)
        {
            sum -= a[l];
            l++;
        }

        length = max(length, r - l + 1);
    }

    cout << length << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}