#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll solve(ll a, ll b)
{
    ll c, d, e;
    c = a + (a - 1);
    d = b + (b - 1);
    e = a + b;
    ll n = max({c, d, e});
    return n;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << solve(a, b) << endl;
    return 0;
}