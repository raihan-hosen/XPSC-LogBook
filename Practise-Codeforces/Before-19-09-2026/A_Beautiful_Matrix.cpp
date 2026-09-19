#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    vector<vector<int>> v(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2) << endl;
                return;
            }
        }
    }
}

int main()
{
    solve();
    return 0;
}