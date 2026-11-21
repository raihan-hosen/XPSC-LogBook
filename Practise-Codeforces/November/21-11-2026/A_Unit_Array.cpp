#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
            neg++;
    }

    int ops = 0;
    int maxNeg = n / 2;
    if (neg > maxNeg)
    {
        ops += neg - maxNeg;
        neg = maxNeg;
    }

    if (neg % 2 != 0)
    {
        ops++;
    }

    cout << ops << endl;
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