#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    ll answer = ceil(n / 2.0) - 1;
    cout << answer << endl;
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