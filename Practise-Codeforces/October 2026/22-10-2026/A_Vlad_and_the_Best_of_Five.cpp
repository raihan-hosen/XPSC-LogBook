#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;

    ll countA = 0, countB = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        else
            countB++;
    }

    if (countA > countB)
        cout << "A" << endl;
    else
        cout << "B" << endl;
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