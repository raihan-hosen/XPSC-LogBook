#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            cout << s[i];
            if (i != s.size() - 1)
            {
                cout << "+";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
