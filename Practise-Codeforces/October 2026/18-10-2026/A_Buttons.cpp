#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if (a + (c + 1) / 2 > b + c / 2)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
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