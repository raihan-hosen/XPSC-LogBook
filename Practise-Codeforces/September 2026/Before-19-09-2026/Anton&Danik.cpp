#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll countA = 0, countD = 0;

    for (char c : s)
    {
        if (c == 'A')
        {
            countA++;
        }
        else if (c == 'D')
        {
            countD++;
        }
    }
    if (countA > countD)
    {
        cout << "Anton" << endl;
    }
    else if (countD > countA)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
