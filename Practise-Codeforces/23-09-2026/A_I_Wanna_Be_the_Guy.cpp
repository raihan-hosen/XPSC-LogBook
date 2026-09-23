#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n, value;
    cin >> n;

    set<ll> levels;

    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        levels.insert(level);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        levels.insert(level);
    }

    if (levels.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
