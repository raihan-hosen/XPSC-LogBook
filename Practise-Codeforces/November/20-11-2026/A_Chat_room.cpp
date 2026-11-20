#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;

    string target = "hello";
    int idx = 0;

    for (char ch : s)
    {
        if (idx < (int)target.size() && ch == target[idx])
        {
            idx++;
        }
    }

    if (idx == (int)target.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}