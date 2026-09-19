#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;

    int luckyCount = 0;
    for (char c : s)
    {
        if (c == '4' || c == '7')
        {
            luckyCount++;
        }
    }

    if (luckyCount == 4 || luckyCount == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
