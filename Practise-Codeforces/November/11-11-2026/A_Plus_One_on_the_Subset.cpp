#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maxVal = max(maxVal, x);
        minVal = min(minVal, x);
    }

    cout << maxVal - minVal << endl;
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