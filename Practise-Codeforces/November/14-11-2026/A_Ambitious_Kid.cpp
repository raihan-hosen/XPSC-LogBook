#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    int minOps = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        minOps = min(minOps, abs(x));
    }

    cout << minOps << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}