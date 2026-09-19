#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    ll n = s2.size();
    bool check = false;

    reverse(s1.begin(), s1.end());

    if (s1 == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
