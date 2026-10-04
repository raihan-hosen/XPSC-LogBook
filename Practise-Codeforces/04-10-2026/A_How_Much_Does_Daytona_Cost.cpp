#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, k;
    cin >> n >> k;

    bool found = false;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        if (val == k)
        {
            found = true;
        }
    }

    if (found)
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