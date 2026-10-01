#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    int available = 0;
    int untreated = 0;

    for (int i = 0; i < n; ++i)
    {
        int event;
        cin >> event;

        if (event == -1)
        {
            if (available > 0)
            {
                available--;
            }
            else
            {
                untreated++;
            }
        }
        else
        {
            available += event;
        }
    }

    cout << untreated << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}