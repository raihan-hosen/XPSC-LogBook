#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damage = 0;

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damage++;
        }
    }

    cout << damage << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}