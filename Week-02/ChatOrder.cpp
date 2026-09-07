#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<string> messages(n);
    for (int i = 0; i < n; i++)
    {
        cin >> messages[i];
    }

    map<string, bool> printed;

    for (int i = n - 1; i >= 0; i--)
    {
        if (!printed[messages[i]])
        {
            cout << messages[i] << endl;
            printed[messages[i]] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
