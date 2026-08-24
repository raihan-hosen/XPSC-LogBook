#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(string s, string t)
{
    ll count = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    string s, t;
    cin >> s >> t;
    solve(s, t);
    return 0;
}