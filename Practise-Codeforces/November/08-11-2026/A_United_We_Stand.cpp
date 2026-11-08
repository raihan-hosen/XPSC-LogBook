#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (v[0] == v[n - 1])
    {
        cout << -1 << endl;
        return;
    }

    int idx = n - 1;
    while (idx >= 0 && v[idx] == v[n - 1])
    {
        idx--;
    }
    int countC = n - 1 - idx;
    int countB = n - countC;

    cout << countB << " " << countC << endl;

    for (int i = 0; i < countB; i++)
    {
        cout << v[i] << (i == countB - 1 ? "" : " ");
    }
    cout << endl;

    for (int i = countB; i < n; i++)
    {
        cout << v[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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