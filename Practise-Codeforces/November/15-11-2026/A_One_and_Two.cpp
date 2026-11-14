#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    int totalTwo = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
        {
            totalTwo++;
        }
    }

    if (totalTwo % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }

    if (totalTwo == 0)
    {
        cout << 1 << endl;
        return;
    }

    int target = totalTwo / 2;
    int currentTwo = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 2)
        {
            currentTwo++;
        }
        if (currentTwo == target)
        {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
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