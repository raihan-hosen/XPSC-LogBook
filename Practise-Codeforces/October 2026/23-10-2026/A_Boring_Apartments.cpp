#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int digit = s[0] - '0';
    int len = s.length();

    int totalPresses = 10 * (digit - 1);

    totalPresses += (len * (len + 1)) / 2;

    cout << totalPresses << endl;
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