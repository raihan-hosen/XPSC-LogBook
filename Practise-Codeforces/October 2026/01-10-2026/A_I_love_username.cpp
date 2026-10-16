#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    int firstScore;
    cin >> firstScore;

    int maxPoints = firstScore;
    int minPoints = firstScore;
    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        int score;
        cin >> score;

        if (score > maxPoints)
        {
            count++;
            maxPoints = score;
        }
        else if (score < minPoints)
        {
            count++;
            minPoints = score;
        }
    }

    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}