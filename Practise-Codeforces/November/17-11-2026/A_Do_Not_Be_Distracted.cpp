#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> visited(26, false);

    for (int i = 0; i < n; ++i)
    {
        if (i > 0 && s[i] != s[i - 1])
        {
            visited[s[i - 1] - 'A'] = true;
        }
        if (visited[s[i] - 'A'])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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