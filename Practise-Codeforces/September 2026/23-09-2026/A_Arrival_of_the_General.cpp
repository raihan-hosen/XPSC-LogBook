#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll maxVal = 0, minVal = 101;
    ll maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxVal)
        {
            maxVal = a[i];
            maxIndex = i;
        }
        if (a[i] <= minVal)
        {
            minVal = a[i];
            minIndex = i;
        }
    }

    ll totalSeconds = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex)
    {
        totalSeconds--;
    }

    cout << totalSeconds << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}