#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int min_val = 1, max_val = n;

    while (l <= r)
    {
        if (a[l] == min_val)
        {
            min_val++;
            l++;
        }
        else if (a[l] == max_val)
        {
            max_val--;
            l++;
        }
        else if (a[r] == min_val)
        {
            min_val++;
            r--;
        }
        else if (a[r] == max_val)
        {
            max_val--;
            r--;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
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
