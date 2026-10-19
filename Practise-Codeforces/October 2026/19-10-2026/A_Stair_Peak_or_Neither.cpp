#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c)
    {
        cout << "STAIR" << endl;
    }
    else if (a < b && b > c)
    {
        cout << "PEAK" << endl;
    }
    else
        cout << "NONE" << endl;
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