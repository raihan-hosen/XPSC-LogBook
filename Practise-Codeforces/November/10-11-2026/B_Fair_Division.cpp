#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, evenCount = 0, oddCount = 0;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if (oddCount % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else if (oddCount == 0)
    {
        if (evenCount % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
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