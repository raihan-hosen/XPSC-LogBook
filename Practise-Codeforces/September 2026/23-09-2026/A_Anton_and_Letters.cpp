#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    getline(cin, s);

    set<char> unique;

    for (char ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            unique.insert(ch);
        }
    }

    cout << unique.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}