#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int y, w;
    cin >> y >> w;

    int maxVal = max(y, w);
    int favorable = 6 - maxVal + 1;
    int total = 6;

    int g = gcd(favorable, total);

    cout << favorable / g << "/" << total / g << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}