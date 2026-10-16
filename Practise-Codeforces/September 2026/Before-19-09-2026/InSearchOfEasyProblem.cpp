#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    bool hard = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            hard = true;
            break;
        }
    }
    if (hard == true)
    {
        cout << "HARD" << endl;
    }
    else
        cout << "EASY" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
