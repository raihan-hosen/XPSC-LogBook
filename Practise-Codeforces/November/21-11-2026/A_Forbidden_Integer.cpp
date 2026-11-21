#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << (i + 1 == n ? "" : " ");
        }
        cout << endl;
        return;
    }

    if (k == 1 || (k == 2 && n % 2 == 1))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    if (n % 2 == 0)
    {
        int cnt = n / 2;
        cout << cnt << endl;
        for (int i = 0; i < cnt; i++)
        {
            cout << 2 << (i + 1 == cnt ? "" : " ");
        }
        cout << endl;
    }
    else
    {
        int twos = (n - 3) / 2;
        cout << twos + 1 << endl;
        cout << 3;
        for (int i = 0; i < twos; i++)
        {
            cout << " " << 2;
        }
        cout << endl;
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