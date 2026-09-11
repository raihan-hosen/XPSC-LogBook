#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}