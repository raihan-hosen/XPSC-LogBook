#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    int m, q;
    cin >> n >> m >> q;

    vector<long long> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    for (int i = 0; i < q; i++)
    {
        long long a;
        cin >> a;

        auto it = upper_bound(b.begin(), b.end(), a);

        if (it == b.begin())
        {
            cout << b[0] - 1 << endl;
        }
        else if (it == b.end())
        {
            cout << n - b.back() << endl;
        }
        else
        {
            long long r = *it;
            long long l = *(it - 1);
            cout << (r - l) / 2 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}