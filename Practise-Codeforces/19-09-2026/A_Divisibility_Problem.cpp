#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b, n = 0;
    cin >> a >> b;

    if (a % b == 0)
    {
        cout << "0" << endl;
    }
    else if (b > a)
    {
        cout << b - a << endl;
    }
    else
    {
        n = a % b;
        cout << b - n << endl;
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