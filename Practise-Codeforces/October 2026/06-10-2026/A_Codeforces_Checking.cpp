#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s = "codeforces";
    char c;
    cin >> c;
    ;

    if (s.find(c) != string::npos)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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