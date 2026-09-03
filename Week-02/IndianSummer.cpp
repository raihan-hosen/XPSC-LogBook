#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cin.ignore();

    set<string> leaves;

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        leaves.insert(line);
    }
    cout << leaves.size() << endl;
}

int main()
{
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cin.ignore();

    set<string> leaves;

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        leaves.insert(line);
    }
    cout << leaves.size() << endl;
}

int main()
{
    solve();
    return 0;
}
