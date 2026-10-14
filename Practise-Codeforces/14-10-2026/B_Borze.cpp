#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;

    string ans = "";
    int n = s.length();

    for (int i = 0; i < n;)
    {
        if (s[i] == '.')
        {
            ans += '0';
            i++;
        }
        else
        {
            if (s[i + 1] == '.')
            {
                ans += '1';
            }
            else
            {
                ans += '2';
            }
            i += 2;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}