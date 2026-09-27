#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];

    ll totalPairs = 0;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ll currentVal = a[i];
            ll counta = 0;
            while (i < n && a[i] == currentVal)
            {
                counta++;
                i++;
            }

            ll countb = 0;
            while (j < m && b[j] == currentVal)
            {
                countb++;
                j++;
            }

            totalPairs += counta * countb;
        }
    }

    cout << totalPairs << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}