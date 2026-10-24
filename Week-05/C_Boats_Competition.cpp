#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxTeams = 0;

    for (int s = 1; s <= 2 * n; s++)
    {
        int teams = 0;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            int w = a[i];
            int partner = s - w;

            if (partner > 0 && partner <= n && freq[w] > 0 && freq[partner] > 0)
            {
                if (w == partner)
                {
                    if (freq[w] >= 2)
                    {
                        teams += freq[w] / 2;
                        freq[w] %= 2;
                    }
                }
                else
                {
                    int cnt = min(freq[w], freq[partner]);
                    teams += cnt;
                    freq[w] -= cnt;
                    freq[partner] -= cnt;
                }
            }
        }
        maxTeams = max(maxTeams, teams);
    }

    cout << maxTeams << endl;
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