#include <bits/stdc++.h>
using namespace std;
vector<int> pairs[1001];

void precompute()
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (gcd(i, j) == 1)
            {
                pairs[i].push_back(j);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> maxIndex(1001, -1);
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        maxIndex[val] = i;
    }

    int ans = -1;

    for (int u = 1; u <= 1000; u++)
    {
        if (maxIndex[u] == -1)
            continue;
        for (int v : pairs[u])
        {
            if (maxIndex[v] == -1)
                continue;
            ans = max(ans, maxIndex[u] + maxIndex[v]);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}