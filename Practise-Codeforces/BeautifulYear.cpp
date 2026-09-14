#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year)
{
    string s = to_string(year);
    return s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&
           s[1] != s[2] && s[1] != s[3] &&
           s[2] != s[3];
}

void solve()
{
    int y;
    cin >> y;

    y++;
    while (!hasDistinctDigits(y))
    {
        y++;
    }

    cout << y << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
