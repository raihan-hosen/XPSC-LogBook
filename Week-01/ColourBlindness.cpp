#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    string row1, row2;
    cin >> row1 >> row2;

    bool identical = true;
    for (int i = 0; i < n; i++)
    {
        char c1 = row1[i];
        char c2 = row2[i];

        if (c1 == 'R' && c2 != 'R')
        {
            identical = false;
            break;
        }
        if ((c1 == 'G' || c1 == 'B') && (c2 != 'G' && c2 != 'B'))
        {
            identical = false;
            break;
        }
    }

    if (identical)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}