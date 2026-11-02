#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll countA = n / a;
    ll countB = n / b;
    ll common = n / lcm(a, b);

    ll ans = (countA - common) * p + (countB - common) * q + common * max(p, q);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}