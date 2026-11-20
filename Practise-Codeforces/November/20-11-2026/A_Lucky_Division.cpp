#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> luckyNums = {
        4, 7,
        44, 47, 74, 77,
        444, 447, 474, 477, 744, 747, 774, 777};

    for (int num : luckyNums)
    {
        if (n % num == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}