#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (i % 2 != a % 2)
        {
            if (i % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    if (even != odd)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << even << endl;
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