#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, k, time = 240;
    cin >> n >> k;

    ll timeLeft = time - k;
    ll solved = 0;

    for (ll i = 1; i <= n; i++)
    {
        ll timeNeed = i * 5;
        if (timeNeed <= timeLeft)
        {
            timeLeft -= timeNeed;
            solved = i;
        }
        else
        {
            break;
        }
    }
    cout << solved << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}