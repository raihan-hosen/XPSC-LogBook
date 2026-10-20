#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> solved(26, false);
    int balloons = 0;

    for (char c : s)
    {
        int index = c - 'A';
        if (!solved[index])
        {
            balloons += 2;
            solved[index] = true;
        }
        else
        {
            balloons += 1;
        }
    }

    cout << balloons << endl;
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