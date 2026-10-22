#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    ll levels = 0;
    ll totalBlocks = 0;
    ll current = 0;

    for (int i = 1;; i++)
    {
        current += i;
        totalBlocks += current;

        if (totalBlocks > n)
        {
            break;
        }
        levels = i;
    }

    cout << levels << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}