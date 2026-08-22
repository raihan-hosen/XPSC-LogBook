#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll solve(ll a, ll b, ll c)
{
    if (a <= b && a != 0 && b != 0 && c != 0)
    {
        for (ll i = a; i <= b; i++)
        {
            if (i % c == 0)
            {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;
    return 0;
}