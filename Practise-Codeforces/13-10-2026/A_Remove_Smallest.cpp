#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    bool possible = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > 1)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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