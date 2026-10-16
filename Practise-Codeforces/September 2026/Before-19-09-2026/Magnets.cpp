#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    int groups = 0;
    string prev = "", curr = "";

    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr != prev)
        {
            groups++;
            prev = curr;
        }
    }

    cout << groups << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
