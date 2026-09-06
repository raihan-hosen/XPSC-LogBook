#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<string, int> database;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (database.find(name) == database.end())
        {
            database[name] = 0;
            cout << "OK" << endl;
        }
        else
        {
            database[name]++;
            string new_name = name + to_string(database[name]);
            database[new_name] = 0;
            cout << new_name << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
