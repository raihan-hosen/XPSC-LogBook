#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int q;
    cin >> q;

    set<pair<int, int>> s1;
    set<pair<int, int>> s2;
    vector<bool> served(q + 1, false);

    int customer_id = 1;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int m;
            cin >> m;
            s1.insert({m, -customer_id});
            s2.insert({customer_id, m});
            customer_id++;
        }
        else if (type == 2)
        {
            while (!s2.empty() && served[s2.begin()->first])
            {
                s2.erase(s2.begin());
            }
            if (!s2.empty())
            {
                auto it = s2.begin();
                int id = it->first;
                int m = it->second;
                served[id] = true;
                s2.erase(it);
                s1.erase({m, -id});
                cout << id << " ";
            }
        }
        else if (type == 3)
        {
            while (!s1.empty() && served[-s1.rbegin()->second])
            {
                s1.erase(--s1.end());
            }
            if (!s1.empty())
            {
                auto it = prev(s1.end());
                int m = it->first;
                int id = -it->second;
                served[id] = true;
                s1.erase(it);
                s2.erase({id, m});
                cout << id << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
