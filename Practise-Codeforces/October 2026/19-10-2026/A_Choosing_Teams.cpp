#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, k;
    cin >> n >> k;

    int validStudents = 0;
    for (int i = 0; i < n; ++i)
    {
        int y;
        cin >> y;
        if (y + k <= 5)
        {
            validStudents++;
        }
    }

    cout << validStudents / 3 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}