#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Square" << endl;
    }
    else
    {
        cout << "Rectangle" << endl;
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