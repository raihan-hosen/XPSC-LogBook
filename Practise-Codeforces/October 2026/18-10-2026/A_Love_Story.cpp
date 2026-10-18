#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s, check = "codeforces";
    cin >> s;
    ll count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (s[i] != check[i])
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}