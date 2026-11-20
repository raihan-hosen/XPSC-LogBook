#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = a + b + c;
    ans = max(ans, a * b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a + b * c);
    ans = max(ans, a * b + c);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}