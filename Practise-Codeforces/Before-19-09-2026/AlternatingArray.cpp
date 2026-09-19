#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int ops1 = 0;
    int ops2 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            if (a[i] < 0)
                ops1++;
        }
        else
        {
            if (a[i] > 0)
                ops1++;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            if (a[i] > 0)
                ops2++;
        }
        else
        {
            if (a[i] < 0)
                ops2++;
        }
    }

    cout << min(ops1, ops2) << endl;

    return 0;
}