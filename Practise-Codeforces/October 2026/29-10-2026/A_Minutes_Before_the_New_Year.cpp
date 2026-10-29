#include <iostream>

using namespace std;

void solve()
{
    int h, m;
    cin >> h >> m;
    int ans = (23 - h) * 60 + (60 - m);
    cout << ans << endl;
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