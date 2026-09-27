#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll i = 0, j = n - 1;

    while (i < j && s[i] != s[j])
    {
        i++;
        j--;
    }

    if (i > j)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (j - i + 1) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}