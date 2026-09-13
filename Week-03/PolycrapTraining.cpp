#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int day = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= day)
        {
            day++;
        }
    }

    cout << day - 1 << endl;

    return 0;
}
