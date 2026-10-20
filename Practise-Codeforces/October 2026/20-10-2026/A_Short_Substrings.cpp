#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string b;
    cin >> b;

    string a = "";
    a += b[0];

    for (int i = 1; i < b.length(); i += 2)
    {
        a += b[i];
    }

    cout << a << endl;
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