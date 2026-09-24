#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << string(m, '#') << endl;
        }
        else if (i % 4 == 2)
        {
            string s(m, '.');
            s[m - 1] = '#';
            cout << s << endl;
        }
        else
        {
            string s(m, '.');
            s[0] = '#';
            cout << s << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}