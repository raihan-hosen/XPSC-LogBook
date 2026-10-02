#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    vector<ll> x(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    ll total = x[3];

    ll a = total - x[2];
    ll b = total - x[1];
    ll c = total - x[0];

    cout << a << " " << b << " " << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}