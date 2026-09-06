#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<string, int>> all_words;

    for (int p = 0; p < 3; p++)
    {
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            all_words.push_back({s, p});
        }
    }

    sort(all_words.begin(), all_words.end());

    vector<int> score(3, 0);
    int total_words = 3 * n;
    int i = 0;

    while (i < total_words)
    {
        int j = i;
        while (j < total_words && all_words[j].first == all_words[i].first)
        {
            j++;
        }

        int count = j - i;

        if (count == 1)
        {
            score[all_words[i].second] += 3;
        }
        else if (count == 2)
        {
            score[all_words[i].second] += 1;
            score[all_words[i + 1].second] += 1;
        }

        i = j;
    }

    cout << score[0] << " " << score[1] << " " << score[2] << endl;
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
