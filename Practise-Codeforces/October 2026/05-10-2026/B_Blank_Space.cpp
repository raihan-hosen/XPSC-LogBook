#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    int maxLength = 0;
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            current++;
            maxLength = max(maxLength, current);
        }
        else
        {
            current = 0;
        }
    }

    cout << maxLength << endl;
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