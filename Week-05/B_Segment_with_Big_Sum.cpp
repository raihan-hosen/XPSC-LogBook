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
    int l = 0;
    int length = INT_MAX;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum >= s)
        {
            length = min(length, r - l + 1);
            sum -= a[l];
            l++;
        }
    }

    if (length == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << length << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}