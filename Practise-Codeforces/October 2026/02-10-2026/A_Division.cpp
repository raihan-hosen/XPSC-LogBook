#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    if (n <= 1399)
    {
        cout << "Division 4" << endl;
    }
    else if (n <= 1599)
    {
        cout << "Division 3" << endl;
    }
    else if (n <= 1899)
    {
        cout << "Division 2" << endl;
    }
    else
    {
        cout << "Division 1" << endl;
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