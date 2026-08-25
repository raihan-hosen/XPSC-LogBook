#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
    {
        cout << "+" << endl;
    }
    else
    {
        cout << "-" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}