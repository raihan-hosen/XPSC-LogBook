#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string a, b;
    cin >> a >> b;

    if (a.size() != 0 && b.size() != 0)
    {
        swap(a[0], b[0]);
    }

    cout << a << " " << b << endl;
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