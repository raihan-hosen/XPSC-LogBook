#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    pair<string, string> servers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> servers[i].first >> servers[i].second;
    }

    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;

        string newip = ip;
        newip.pop_back();

        string name = "";
        for (int j = 0; j < n; j++)
        {
            if (servers[j].second == newip)
            {
                name = servers[j].first;
                break;
            }
        }

        cout << command << " " << ip << " #" << name << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
