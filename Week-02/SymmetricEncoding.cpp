#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string b;
    cin >> b;

    vector<bool> present(26, false);
    for (char c : b)
    {
        present[c - 'a'] = true;
    }

    string r = "";
    for (int i = 0; i < 26; ++i)
    {
        if (present[i])
        {
            r += (char)('a' + i);
        }
    }

    char decode_map[256];
    int len = r.length();
    for (int i = 0; i < len; ++i)
    {
        decode_map[r[i]] = r[len - 1 - i];
    }

    string s = "";
    for (char c : b)
    {
        s += decode_map[c];
    }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
