#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    stack<int> lower;
    stack<int> upper;

    int n = s.length();
    vector<bool> keep(n, true);

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'b')
        {
            keep[i] = false;
            if (!lower.empty())
            {
                keep[lower.top()] = false;
                lower.pop();
            }
        }
        else if (s[i] == 'B')
        {
            keep[i] = false;
            if (!upper.empty())
            {
                keep[upper.top()] = false;
                upper.pop();
            }
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower.push(i);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper.push(i);
        }
    }

    string result = "";
    for (int i = 0; i < n; ++i)
    {
        if (keep[i])
        {
            result += s[i];
        }
    }

    cout << result << endl;
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
