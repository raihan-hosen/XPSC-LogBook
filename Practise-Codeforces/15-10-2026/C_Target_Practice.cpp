#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int totalScore = 0;
    for (int i = 0; i < 10; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 10; ++j)
        {
            if (s[j] == 'X')
            {
                int dist_r = min(i, 9 - i);
                int dist_c = min(j, 9 - j);
                int ring = min(dist_r, dist_c);

                totalScore += (ring + 1);
            }
        }
    }
    cout << totalScore << endl;
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