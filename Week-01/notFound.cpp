#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    vector<bool> present(26, false);
    for (char c : s)
    {
        present[c - 'a'] = true;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (!present[i])
        {
            return string(1, (char)('a' + i));
        }
    }
    return "None";
}

int main()
{
    string s;
    cin >> s;

    cout << solve(s) << endl;

    return 0;
}